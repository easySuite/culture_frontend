<?php

/**
 * @file
 * Culture distribution implementation to present a Panels layout.
 *
 * Available variables:
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout.
 * - $css_id: unique id if present.
 */
?>

<div <?php if (!empty($css_id)) {print ' id="$css_id"';} ?> class="container">
  <div class="row front-slider-container">
    <?php if ($content['s1_r_01_100']): ?>
      <div class="col col-md-12 front-slider-wrapper"><?php print $content['s1_r_01_100']; ?></div>
    <?php endif; ?>
  </div>

  <div class="row content-container">
    <?php if ($content['s2_r_01_033'] || $content['s2_r_01_066']): ?>
      <div class="col col-lg-8 col-md-12 col-sm-12 primary-content-wrapper"><?php print $content['s2_r_01_066']; ?></div>
      <div class="col col-lg-4 col-md-12 col-sm-12 secondary-content-wrapper"><?php print $content['s2_r_01_033']; ?></div>
    <?php endif; ?>
  </div>
</div>
