(function ($) {
  'use strict';

  Drupal.behaviors.culture_frontend_events_filter = {
    attach: function (context, settings) {
      var form = $('#views-exposed-form-ding-event-ding-event-list', context);

      var tomorrow = $('#events-tomorrow', context);
      var next_weekend = $('#events-next_weekend', context);
      var top_events = $('#events-top_events', context);

      var start_date_form = $('input[name="date[value][date]"]', context);
      var end_date_form = $('input[name="field_ding_event_date_value_1[value][date]"]', context);

      var sticky_form = $('select[name="sticky"]', context);
      $('#edit-sticky-wrapper').hide();

      tomorrow.click(function (e) {
        sticky_form.find('option[value="All"]').prop('selected', true);
        var start_date_value = settings.culture_frontend.tommorow.date_start;
        var end_date_value  = settings.culture_frontend.tommorow.date_end;
        e.preventDefault();
        start_date_form.val(start_date_value);
        end_date_form.val(end_date_value);
        form.find('.ctools-auto-submit-click').click()
      });

      next_weekend.click(function (e) {
        sticky_form.find('option[value="All"]').prop('selected', true);
        var start_date_value = settings.culture_frontend.next_weekend.date_start;
        var end_date_value  = settings.culture_frontend.next_weekend.date_end;
        e.preventDefault();
        start_date_form.val(start_date_value);
        end_date_form.val(end_date_value);
        form.find('.ctools-auto-submit-click').click();
      });

      top_events.click(function (e) {
        e.preventDefault();
        sticky_form.find('option[value="1"]').prop('selected', true);
        start_date_form.val(settings.culture_frontend.top_events.today);
        end_date_form.val('');
        form.find('.ctools-auto-submit-click').click();
      });
    }
  };

})(jQuery);
