(function($) {
Drupal.behaviors.radix_admin = {
  attach: function (context, settings) {
    $('#radix-admin-menu > ul.menu > li', context).mouseenter(function () {
      $(this).addClass('over');
    });
    $('#radix-admin-menu > ul.menu > li', context).mouseleave(function () {
      $(this).removeClass('over');
    });
  }
};
})(jQuery);
