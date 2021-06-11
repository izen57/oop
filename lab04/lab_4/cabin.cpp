#include "cabin.h"
#include <stdio.h>
#include "ui_mainwindow.h"


Cabin::Cabin(QObject *parent): QObject(parent)
{
	moving_timer.setSingleShot(true);

	QObject::connect(this, SIGNAL(cabin_called()), this, SLOT(moving()));
	QObject::connect(this, SIGNAL(cabin_stopped()), &doors, SLOT(opening()));
	QObject::connect(this, SIGNAL(cabin_target_achieved()), this, SLOT(stop()));
	QObject::connect(&doors, SIGNAL(doors_closed()), this, SLOT(waiting()));
	QObject::connect(&moving_timer, SIGNAL(timeout()), this, SLOT(moving()));
}

void Cabin::stop()
{
	if (state != MOVING)
		return;

	state = STOP;

	printf("Stop on the %d floor\n", current_floor);

	emit cabin_stopped(); // Doors::opening()
}

void Cabin::waiting()
{
	if (state != STOP)
		return;

	state = WAITING;

	printf("Waiting...\n");

	emit cabin_wait(current_floor); // Controller::free()
}

void Cabin::moving()
{
	if (state != GETTING && state != MOVING)
		return;

	if (state == MOVING)
		current_floor += current_direction;

	state = MOVING;

	if (current_floor == current_target)
		emit cabin_target_achieved(); // Cabin::stop()
	else
	{
		emit cabin_passed_floor(current_floor, current_direction); // Controller::busy()
		moving_timer.start(MOVING_TIME); // Cabin::moving()
	}
}

void Cabin::get_target(int floor, const direction_t &direction)
{
	if (state != WAITING)
		return;

	state = GETTING;

	current_target = floor;
	current_direction = direction;

	emit cabin_called(); // Cabin::moving()
}