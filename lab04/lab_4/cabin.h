#ifndef CABIN_H
#define CABIN_H

#include <QObject>
#include <QTimer>
#include "doors.h"
#include "direction.h"

#define MOVING_TIME 1500

class Cabin: public QObject
{
	Q_OBJECT

	enum state_t
	{
		STOP,
		WAITING,
		GETTING,
		MOVING
	};

	public:
		explicit Cabin(QObject *parent = nullptr);

	signals:
		void cabin_called();
		void cabin_stopped();
		void cabin_target_achieved();
		void cabin_passed_floor(int floor, const direction_t &direction);
		void cabin_wait(int floor);

	public slots:
		void stop();
		void waiting();
		void get_target(int floor, const direction_t &direction);
		void moving();

	private:
		Doors doors;
		direction_t current_direction = STAY;
		state_t state = WAITING;
		int current_floor = 1;
		int current_target = 0;

		QTimer moving_timer;
};

#endif // CAGE_H