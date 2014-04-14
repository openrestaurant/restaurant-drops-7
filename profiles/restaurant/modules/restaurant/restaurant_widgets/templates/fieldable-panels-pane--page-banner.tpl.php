<?php
/**
 * @file
 * Template for pane banner.
 */
?>
<?php if ($width == 'fixed'): ?>
  <div class="container fixed">
<?php endif; ?>
<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <?php if ($width == 'fluid'): ?>
    <div class="container">
  <?php endif; ?>
      <h1><?php print $pane->title; ?></h1>
      <?php print render($content); ?>
  <?php if ($width == 'fluid'): ?>
    </div>
  <?php endif; ?>
</div>
<?php if ($width == 'fixed'): ?>
  </div>
<?php endif; ?>
