<?php
/**
 * @file
 * Migration file for Restaurant Reservation module
 */

/**
 * Implements hook_migrate_api().
 */
function restaurant_reservation_demo_migrate_api() {
  return array(
    'api' => 2,
    'field handlers' => array(
      'DateMigrateFieldHandler',
    ),
    'migrations' => array(
      'RestaurantReservationMigrateReservations' => array(
        'class_name' => 'RestaurantReservationMigrateReservationsMigration',
      ),
    ),
  );
}

// Migration class
class RestaurantReservationMigrateReservationsMigration extends Migration {

  public function __construct() {
    parent::__construct();
    $this->description = t('Import reservations.');

    // Create a map object for tracking the relationships between source rows
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'name' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationNode::getKeySchema()
    );

    // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV(drupal_get_path('module', 'restaurant_reservation_demo') . '/import/reservations.csv', $this->csvcolumns(), array('header_rows' => 1));

    $this->destination = new MigrateDestinationNode('reservation', array('text_format' => 'panopoly_html_text'));

    // Fields Mapping
    $this->addFieldMapping('field_reservation_name', 'name');
    $this->addFieldMapping('field_reservation_date', 'date');
    $this->addFieldMapping('field_reservation_persons', 'persons');
    $this->addFieldMapping('field_reservation_phone', 'phone');
    $this->addFieldMapping('field_reservation_email', 'email');
    $this->addFieldMapping('field_reservation_message', 'message');
    $this->addFieldMapping('field_reservation_status', 'status');
  }

  function csvcolumns() {
    // Name,Date,Persons,Phone,Email,Message,Status
    $columns[] = array('name', 'Name');
    $columns[] = array('date', 'Date');
    $columns[] = array('persons', 'Persons');
    $columns[] = array('phone', 'Phone');
    $columns[] = array('email', 'Email');
    $columns[] = array('message', 'Message');
    $columns[] = array('status', 'Status');
    return $columns;
  }

  function prepareRow($row) {
    // Set date as future date.
    $date = time() + (rand(1, 10) * 24 * rand(20, 60) * 60);
    $row->date = date('Y-m-d H:i:s', $date);
  }
}
