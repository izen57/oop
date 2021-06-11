#include "doors.h"
#include <stdio.h>

Doors::Doors(QObject *parent): QObject(parent)
{
	stay_timer.setInterval(STAY_TIME);

	stay_timer.setSingleShot(true);
	closing_timer.setSingleShot(true);
	opening_timer.setSingleShot(true);

	QObject::connect(&closing_timer, SIGNAL(timeout()), this, SLOT(closed()));
	QObject::connect(&opening_timer, SIGNAL(timeout()), this, SLOT(opened()));
	QObject::connect(this, SIGNAL(doors_opened()), &stay_timer, SLOT(start()));
	QObject::connect(&stay_timer, SIGNAL(timeout()), this, SLOT(closing()));
}

void Doors::closing()
{
	if (state != OPENED)
		return;

	puts("Doors are closing...");

	state = CLOSING;
	closing_timer.start(CLOSING_TIME); // Doors::closed()
}

void Doors::opening()
{
	if (state != CLOSED && state != CLOSING)
		return;

	puts("Doors are opening...");

	if (state == CLOSED)
	{
		state = OPENING;
		opening_timer.start(OPENING_TIME); // Doors::closed
	}
	else if (state == CLOSING)
	{
		state = OPENING;
		int rem_time = closing_timer.remainingTime();
		closing_timer.stop();
		opening_timer.start(OPENING_TIME - rem_time); // Doors::closed
	}
}

void Doors::closed()
{
	if (state != CLOSING)
		return;

	puts("Doors closed");

	state = CLOSED;

	emit doors_closed(); // Cabin::wait
}

void Doors::opened()
{
	if (state != OPENING)
		return;

	puts("Doors opened");

	state = OPENED;

	emit doors_opened(); // Cabin::wait
}