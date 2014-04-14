<?php

/**
 * @file
 * Template for social widget.
 */
?>
<?php if (count($links)): ?>
  <ul class="nav nav-pills nav-stacked">
    <?php foreach ($links as $link): ?>
      <li><?php print render($link); ?></li>
    <?php endforeach; ?>
  </ul>
<?php endif; ?>
