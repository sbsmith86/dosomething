<?php

/**
 * @file
 * Provides classes for the Reward Entity.
 */

/**
 * Our Reward entity class.
 */
class RewardEntity extends Entity {

  /**
   * Override this in order to implement a custom default URI.
   */
  protected function defaultUri() {
    return array('path' => 'reward/' . $this->identifier());
  }
}

/**
 * Our custom controller for the Reward Entity type.
 */
class RewardEntityController extends EntityAPIController {

  /**
   * Overrides save() method.
   *
   * Populates created and updated automatically.
   */
  public function save($entity, DatabaseTransaction $transaction = NULL) {
    if (isset($entity->is_new)) {
      $entity->created = REQUEST_TIME;
    }
    parent::save($entity, $transaction);
  }
}