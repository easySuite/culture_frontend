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

<div <?php if (!empty($css_id)) { print ' id="$css_id"';} ?> class="container">
  <div class="row">
    <?php if ($content['s1_r_01_100']): ?>
      <div class="col col-md-12"><?php print $content['s1_r_01_100']; ?></div>
    <?php endif; ?>
  </div>

  <div class="row">
    <?php if ($content['s2_r_01_033'] || $content['s2_r_01_066']): ?>
      <div class="col col-md-8"><?php print $content['s2_r_01_066']; ?></div>
      <div class="col col-md-4"><?php print $content['s2_r_01_033']; ?></div>
    <?php endif; ?>
  </div>
</div>
