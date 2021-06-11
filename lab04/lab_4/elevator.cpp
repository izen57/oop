#include "elevator.h"

Elevator::Elevator(QObject *parent): QObject(parent)
{
	QObject::connect(&cabin, SIGNAL(cabin_wait(int)), &control_device, SLOT(free(int)));
	QObject::connect(&cabin, SIGNAL(cabin_passed_floor(int, direction_t)), &control_device, SLOT(busy(int, direction_t)));
	QObject::connect(&control_device, SIGNAL(new_target_signal(int, direction_t)), &cabin, SLOT(get_target(int, direction_t)));
}

void Elevator::call_button_pressed(int floor)
{
	control_device.new_target(floor);
}