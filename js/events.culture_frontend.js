(function ($) {
  'use strict';

  Drupal.behaviors.culture_frontend_events_filter = {
    attach: function (context, settings) {
      var $body = $('body');
      var form = $('#views-exposed-form-ding-event-ding-event-list', context);

      var tomorrow = $('#events-tomorrow', context);
      var next_weekend = $('#events-next_weekend', context);
      var top_events = $('#events-top_events', context);

      var start_date_form = $('input[name="date[value][date]"]', context);
      var end_date_form = $('input[name="field_ding_event_date_value_1[value][date]"]', context);

      var sticky_form = $('select[name="sticky"]', context);
      $('#edit-sticky-wrapper').hide();

      var observer = new MutationObserver(function (mutationList) {
        for (var mutation of mutationList) {
          if (mutation.attributeName === 'style' && $(mutation.target).find('li.selected').length > 0) {
            var content = $('#views-exposed-form-ding-event-ding-event-list input#edit-title').val();
            var matches = content.match(/(.*?)( \[)(.*?)(\] \[)(.*?)(\])/);
            var nid = matches[5];
            var search_key = content.substring(0, -5);
            $('#views-exposed-form-ding-event-ding-event-list input#edit-title').val(search_key);
            window.location.href = "/node/" + nid;
          }
        }
      });

      var $textfield = $("#autocomplete", context);
      if ($textfield[0]) {
        observer.observe($textfield[0], {attributes: true});
      }

      $(".quick-checkbox").change(function() {
        $(".quick-checkbox").not(this).prop('checked', false);
      });

      tomorrow.click(function (e) {
        sticky_form.find('option[value="All"]').prop('selected', true);
        var start_date_value = settings.culture_frontend.tomorrow.date_start;
        var end_date_value  = settings.culture_frontend.tomorrow.date_end;
        if (e.target.type !== 'checkbox') {
          e.preventDefault();
        }
        start_date_form.val(start_date_value);
        end_date_form.val(end_date_value);
        form.find('.ctools-auto-submit-click').click();
      });

      next_weekend.click(function (e) {
        sticky_form.find('option[value="All"]').prop('selected', true);
        var start_date_value = settings.culture_frontend.next_weekend.date_start;
        var end_date_value  = settings.culture_frontend.next_weekend.date_end;
        if (e.target.type !== 'checkbox') {
          e.preventDefault();
        }
        start_date_form.val(start_date_value);
        end_date_form.val(end_date_value);
        form.find('.ctools-auto-submit-click').click();
      });

      top_events.click(function (e) {
        if (e.target.type !== 'checkbox') {
          e.preventDefault();
        }
        sticky_form.find('option[value="1"]').prop('selected', true);
        start_date_form.val(settings.culture_frontend.top_events.today);
        end_date_form.val('');
        form.find('.ctools-auto-submit-click').click();
      });

      form.find('.ctools-auto-submit-click').on('click', function (event) {
        $body.addClass('overlay-is-active');
        Drupal.TingSearchOverlay();
      });

      if ($body.hasClass('overlay-is-active')) {
        Drupal.TingSearchOverlay(true);
        $body.removeClass('overlay-is-active');
      }
    }
  };

})(jQuery);
