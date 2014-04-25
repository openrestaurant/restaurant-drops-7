<?php
/**
 * @file
 * Template for the 2col layout.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div class="layout-2col clearfix <?php if (!empty($classes)) { print $classes; } ?><?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  
  <?php if ($content['header']): ?>
    <div class="panel-pane-region panel-pane-region-header <?php print $extra_classes['header']; ?>">
      <div class="panel-region-inner">
        <?php print $content['header']; ?>
      </div>
    </div> <!-- /#header -->
  <?php endif; ?>
  
  <?php if ($content['contentmain1_left'] || $content['contentmain1_right']): ?>
    <div class="container">
      <div class="row">
        <div class="col-md-8 panel-pane-region panel-pane-region-contentmain1-left <?php print $extra_classes['contentmain1_left']; ?>">
          <?php print $content['contentmain1_left']; ?>
        </div>
        <div class="col-md-4 panel-pane-region panel-pane-region-contentmain1-right <?php print $extra_classes['contentmain1_right']; ?>">
          <?php print $content['contentmain1_right']; ?>
        </div>
      </div>
    </div>
  <?php endif; ?>

  <?php if ($content['fullwidth1']): ?>
    <div class="panel-pane-region panel-region-full-width panel-region-full-width-1 <?php print $extra_classes['fullwidth1']; ?>">
      <div class="panel-region-inner">
        <?php print $content['fullwidth1']; ?>
      </div>
    </div> <!-- /#fullwidth1 -->
  <?php endif; ?>

  <?php if ($content['contentmain2_left'] || $content['contentmain2_right']): ?>
    <div class="container">
      <div class="row">
        <div class="col-md-4 panel-pane-region panel-pane-region-contentmain2-left <?php print $extra_classes['contentmain2_left']; ?>">
          <?php print $content['contentmain2_left']; ?>
        </div>
        <div class="col-md-8 panel-pane-region panel-pane-region-contentmain2-right <?php print $extra_classes['contentmain2_right']; ?>">
          <?php print $content['contentmain2_right']; ?>
        </div>
      </div>
    </div>
  <?php endif; ?>

  <?php if ($content['fullwidth2']): ?>
    <div class="panel-pane-region panel-region-full-width panel-region-full-width-2 <?php print $extra_classes['fullwidth2']; ?>">
      <div class="panel-region-inner">
        <?php print $content['fullwidth2']; ?>
      </div>
    </div> <!-- /#fullwidth2 -->
  <?php endif; ?>

  <?php if ($content['contentmain3']): ?>
    <div class="panel-pane-region panel-pane-region-contentmain3 <?php print $extra_classes['contentmain3']; ?>">
      <div class="container">
        <div class="panel-region-inner">
          <?php print $content['contentmain3']; ?>
        </div>
      </div>
    </div> <!-- /#contentmain3 -->
  <?php endif; ?>

  <?php if ($content['fullwidth3']): ?>
    <div class="panel-pane-region panel-region-full-width panel-region-full-width-3 <?php print $extra_classes['fullwidth3']; ?>">
      <div class="panel-region-inner">
        <?php print $content['fullwidth3']; ?>
      </div>
    </div> <!-- /#fullwidth3 -->
  <?php endif; ?>

  <?php if ($content['contentmain4_left'] || $content['contentmain4_right']): ?>
    <div class="container">
      <div class="row">
        <div class="col-md-6 panel-pane-region panel-pane-region-contentmain4-left <?php print $extra_classes['contentmain4_left']; ?>">
          <?php print $content['contentmain4_left']; ?>
        </div>
        <div class="col-md-6 panel-pane-region panel-pane-region-contentmain4-right <?php print $extra_classes['contentmain4_right']; ?>">
          <?php print $content['contentmain4_right']; ?>
        </div>
      </div>
    </div>
  <?php endif; ?>

</div> <!-- /.layout-2col -->
