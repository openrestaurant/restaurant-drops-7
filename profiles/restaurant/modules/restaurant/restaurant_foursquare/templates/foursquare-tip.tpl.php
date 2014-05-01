<?php
/**
 * @file
 * Template file for Restaurant Foursquare Tip.
 */
?>
<div class="authorImage">
  <a href="<?php print $data->canonicalUrl; ?>">
    <img alt="<?php print $data->user->fullName; ?>" class="avatar" data-retina-url="<?php print $data->user->photoUrlRetina; ?>" height="32" src="<?php print $data->user->photoUrl; ?>" title="<?php print $data->user->fullName; ?>" width="32">
  </a>
</div>
<div class="tipContents">
  <p class="tipText"><?php print $data->text; ?></p>
  <div class="tipInfo">
    <span class="userName"><a href="<?php print $data->canonicalUrl; ?>"><?php print $data->user->fullName; ?></a></span> · <span class="tipDate"><?php print $data->date; ?></span>
  </div>
</div>
