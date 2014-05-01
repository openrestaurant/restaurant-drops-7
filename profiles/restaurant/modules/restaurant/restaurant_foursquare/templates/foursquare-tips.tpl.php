<?php
/**
 * @file
 * Template file for Restaurant Foursquare Tips.
 */
?>
<div class="foursquare-tips">
  <?php if (count($tips)): ?>
    <ul class="tips">
      <?php foreach ($tips as $key => $tip): ?>
        <li class="tip"><?php print render($tip); ?></li>
      <?php endforeach; ?>
    </ul>
  <?php endif; ?>
</div>
