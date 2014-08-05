
<?php

/**
 * @file
 * Template for site navigation.
 */
?>
<?php if ($width == 'fixed'): ?>
  <div class="container fixed">
<?php endif; ?>
<nav class="navbar <?php print $style; ?> <?php print $position; ?>" role="navigation">
  <?php if ($width == 'fluid'): ?>
    <div class="container">
  <?php endif; ?>
      <!-- Brand and toggle get grouped for better mobile display -->
      <div class="navbar-header">
        <button type="button" class="navbar-toggle" data-toggle="collapse" data-target="#navbar-collapse">
          <span class="sr-only"><?php print t('Toggle navigation'); ?></span>
          <span class="icon-bar"></span>
          <span class="icon-bar"></span>
          <span class="icon-bar"></span>
        </button>
        <?php if (!empty($front_page) || !empty($site_name)): ?>
          <a href="<?php print $front_page; ?>" id="logo" class="navbar-brand">
            <?php print $site_name; ?>
          </a>
        <?php endif; ?>
      </div> <!-- /.navbar-header -->

      <!-- Collect the nav links, forms, and other content for toggling -->
      <div class="collapse navbar-collapse" id="navbar-collapse">
        <?php if (!empty($main_menu)): ?>
          <?php print render($main_menu); ?>
        <?php endif; ?>

        <?php if (!empty($reservation_link)): ?>
          <div class="navbar-right">
            <?php print $reservation_link; ?>
          </div>
        <?php endif; ?>
      </div><!-- /.navbar-collapse -->
  <?php if ($width == 'fluid'): ?>
    </div>
  <?php endif; ?>
</nav>
<?php if ($width == 'fixed'): ?>
  </div>
<?php endif; ?>
