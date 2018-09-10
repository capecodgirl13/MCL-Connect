(function($){
    Drupal.behaviors.MyForm = {attach: function(context) {

        $("[class*='views-widget-filter-']").hide();
        $("#edit-filteroptions").val('');

        var param = '';
        $.each(document.location.search.substr(1).split('&'),function(c,q){
            if (q) {
                var i = q.split('=');
                param = decodeURI(i[0]);
                if (param.indexOf('[') >= 0) {
                    param = param.slice(0,param.indexOf('[') + 1 );
                }
                if (i[1] != '' && i[1] != 'All') {
                    $('.views-widget-filter-' + param).show();
                }
            }
        });

        $('#edit-filteroptions', context).change(function() {
            var fieldClass = '';
            if (this.value != '') {
                fieldClass = '.views-widget-filter-' + this.value;
            }
            $(fieldClass).show();
        });

        $('.delete-field', context).click(function() {
            $(this).closest('.views-exposed-widget').find("input[type=text], textarea").val("");
            $(this).closest('.views-exposed-widget').hide();
        });
    }};
})(jQuery);
