<?php
/**
 * @file
 * Template file for Restaurant Foursquare Widget.
 */
?>
<div class="<?php print $classes; ?>">
  <div class="widget-top">
    <?php if (isset($show['rating']) || isset($show['check_ins']) || isset($show['users'])): ?>
      <div class="bar stats">
        <?php if (isset($show['rating'])): ?>
          <div class="item rating">
            <span class="data"><?php print $data->rating; ?> / 10</span>
            <span class="text"><?php print t('Rating'); ?>
          </div>
        <?php endif; ?>
        
        <?php if (isset($show['check_ins'])): ?>
          <div class="item check-ins">
            <span class="data"><?php print number_format($data->stats->checkinsCount); ?></span>
            <span class="text"><?php print t('Check-ins'); ?>
          </div>
        <?php endif; ?>
        
        <?php if (isset($show['users'])): ?>
          <div class="item users">
            <span class="data"><?php print number_format($data->stats->usersCount); ?></span>
            <span class="text"><?php print t('Users'); ?>
          </div>
        <?php endif; ?>
      </div>
    <?php endif; ?>
  </div>

  <?php if (isset($show['tips'])): ?>
    <div class="widget-body">
      <?php print $tips; ?>
    </div>
  <?php endif; ?>

  <?php if (isset($show['button'])): ?>
    <div class="widget-bottom">
      <?php print $button_check_in; ?>
    </div>
  <?php endif; ?>
</div>
