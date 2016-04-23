<?php
/**
 * @file
 * contact_form.features.contact_categories.inc
 */

/**
 * Implements hook_contact_categories_defaults().
 */
function contact_form_contact_categories_defaults() {
  return array(
    'Website feedback' => array(
      'category' => 'Website feedback',
      'recipients' => 'handmaderevival@gmail.com',
      'reply' => '',
      'weight' => 0,
      'selected' => 1,
    ),
    'purchase inquiry' => array(
      'category' => 'purchase inquiry',
      'recipients' => 'handmaderevival@gmail.com',
      'reply' => 'Thank you so much for your inquiry. I will get back to you as soon as possible.

Best,
Handmade Revival',
      'weight' => 0,
      'selected' => 0,
    ),
  );
}
