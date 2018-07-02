(function($) {
  'use strict';

  Drupal.behaviors.event_node_culture_frontend = {
    attach: function () {
      let lists = [
          'controlled-similar-list',
          'controlled-category-list',
          'controlled-day-list',
          'controlled-library-list',
          'controlled-manually-list',
      ];

      let slick_options = {
        infinite: false,
        slidesToShow: 3,
        slidesToScroll: 1,
      };

      $.each(lists, function(index, list) {
        if ($('.' + list + ' .views-row').length > 3) {
          $('.' + list + ' .view-content').slick(slick_options);
        }
      });
    }
  }
})(jQuery);
