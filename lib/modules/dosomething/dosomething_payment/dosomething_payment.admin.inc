<?php
/**
 * @file
 * Admin config form settings.
 */

/**
 * System settings form for DoSomething Payment specific variables.
 */
function dosomething_payment_admin_config_form($form, &$form_state) {
  $form['donate'] = array(
    '#type' => 'fieldset',
    '#title' => t('Donate'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );
  $form['donate']['dosomething_payment_donate_confirm_msg'] = array(
    '#type' => 'textarea',
    '#rows' => 2,
    '#title' => t('Confirmation Message'),
    '#required' => TRUE,
    '#default_value' => variable_get('dosomething_payment_donate_confirm_msg'),
  );
  $form['stripe'] = array(
    '#type' => 'fieldset',
    '#title' => t('Stripe'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $form['stripe']['dosomething_payment_stripe_api_key'] =  array(
    '#type' => 'textfield',
    '#title' => t('Stripe API key'),
    '#default_value' => variable_get('dosomething_payment_stripe_api_key'),
  );
  return system_settings_form($form);
}