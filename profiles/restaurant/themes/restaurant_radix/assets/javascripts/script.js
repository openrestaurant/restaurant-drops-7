/**
 * @file
 * Custom scripts for theme.
 */
(function ($) {
  $(document).ready(function() {
    // Show dropdowns on hover.
    $('.nav > li.dropdown').mouseenter(function() {
      $(this).addClass('open');
    });
    $('.nav > li.dropdown').mouseleave(function() {
      $(this).removeClass('open');
    });
    
    // Make dropdown toggle clickable.
    $('.dropdown-toggle').on('click', function() {
      if ($(this).attr('href')) {
        window.location.href = $(this).attr('href');
      }
    });

    // Equal height for .row-eh and .col-eh
    $('body').imagesLoaded(function() {
      $('.row-eh, .col-eh').eh();
    });

    $('.pane-menu-categories-menu-categories-jump-navigation').affix({
      offset: {
        top: 100,
        bottom: function () {
          return (this.bottom = $('.footer').outerHeight(true))
        }
      }
    })
  });

  // Sets all el to equal height.
  $.fn.eh = function() {
    return this.height(Math.max.apply(this, $.map(this, function(el) { return $(el).outerHeight() })));
  }
})(jQuery);
