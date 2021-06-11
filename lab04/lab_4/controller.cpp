#include "controller.h"
#include <stdio.h>

Controller::Controller(QObject *parent): QObject(parent)
{
	targets.resize(FLOOR_NUMBER);

	for (auto i: targets)
		i = false;

	QObject::connect(this, SIGNAL(new_target_signal(int, direction_t)), this, SLOT(busy(int, direction_t)));
}

void Controller::busy(int floor, const direction_t &direction)
{
	if (state == FREE)
	{
		state = BUSY;
		current_target = floor;
		current_direction = direction;
	}
	else
	{
		printf("Current floor: %d\n", floor);
		current_floor += current_direction;
	}
}

void Controller::free(int floor)
{
	state = FREE;
	current_floor = floor;
	next_target();
}

void Controller::next_target()
{
	if (targets[current_floor - 1])
	{
		targets[current_floor - 1] = false;
		emit new_target_signal(current_floor, STAY); // Controller::busy(current_floor, STAY); Cabin::get_target()
	}
	else
	{
		int i = 0;
		while (i < (int) (targets.size()) && !targets[i])
			i++;

		if (i >= 0 && i < (int) (targets.size()))
		{
			targets[i] = false;

			emit i > current_floor - 1? new_target_signal(i + 1, UP) : new_target_signal(i + 1, DOWN); // Controller::busy(); Cabin::get_target()
		}
	}
}

void Controller::new_target(int floor)
{
	printf("New target is located on the %d floor\n", floor);

	targets[floor - 1] = true;

	if (state == FREE)
		next_target();
}