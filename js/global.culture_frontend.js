(function ($) {

  'use strict';

  Drupal.behaviors.culture_frontend_global = {
    attach: function (context, settings) {
      var search_block = $('input[name="search_block_form"]');
      search_block.on('change', function (a) {
        var $this = this;

        // Getting all string passed by autocomplete.
        var search_key = $($this).val();

        // Splitting into pieces in order to get node id.
        var matches = search_key.match(/(.*?)( \[)(.*?)(\] \[)(.*?)(\])/);

        // Defining node id variable,
        var nid = matches[5];

        // Set node id into hidden field for further processing.
        $('[name="redirected_nid"]').val(nid);

        // Cleaning up searched string and present this normally.
        search_key = search_key.substring(0, search_key.length - 5);

        // Put cleaned search string back into search field.
        $($this).val(search_key);
      });
    }
  }
})(jQuery);
