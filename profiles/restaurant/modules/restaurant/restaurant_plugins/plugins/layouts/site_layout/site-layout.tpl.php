<?php
/**
 * @file
 * Template for the site layout.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<?php if ($content['navigation']): ?>
  <?php print $content['navigation']; ?>
<?php endif; ?>

<?php if ($content['top']): ?>
  <section class="top">
    <div class="container">
      <?php print $content['top']; ?>
    </div>
  </section>
<?php endif; ?>

<?php if ($content['header']): ?>
  <header class="header" role="header">
    <div class="container">
      <div class="row">
        <div class="col-md-12">
          <?php print $content['header']; ?>
        </div>
      </div>
    </div>
  </header>
<?php endif; ?>

<section class="main">
  <?php print $content['contentmain']; ?>
</section>

<?php if ($content['footer_col1'] || $content['footer_col2']): ?>
  <footer class="footer" role="footer">
    <div class="container">
      <div class="row">
        <div class="col-md-8 column-1">
          <div class="panel-panel-inner">
            <?php print $content['footer_col1']; ?>
          </div>
        </div>
        <div class="col-md-4 column-2">
          <div class="panel-panel-inner">
            <?php print $content['footer_col2']; ?>
          </div>
        </div>
      </div>
    </div>
  </footer>
<?php endif; ?>
