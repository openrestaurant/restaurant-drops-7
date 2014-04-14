<?php

/**
 * @file
 * Template for a reservation node.
 *
 * This is the template used in the reservation emails.
 */
?>
<h4><?php print t('Reservation Details'); ?></h4>
<?php foreach (element_children($content) as $field): ?>
<?php if (isset($content[$field]['#title']) && isset($content[$field][0]['#markup'])): ?>
<strong><?php print $content[$field]['#title']; ?>:</strong> <?php print $content[$field][0]['#markup']; ?><br /><br />
<?php endif; ?>
<?php endforeach; ?>
