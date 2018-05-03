#ifndef _ACTUATOR_THRUSTER_H
#define _ACTUATOR_THRUSTER_H

#include "../object.h"
#include "actuator.h"

class THRUSTER : public ACTUATOR {

private:
	int	firstObject;

	double	x;
	double	y;
	double	z;
	double  lowStop;
	double  highStop;
	double  shutoffThreshold;

	double lastDesired;

	OBJECT* first;

public:
	THRUSTER(void) : ACTUATOR(1),
	                 lastDesired(0.0),
	                 first(NULL) {};

	void Actuate(void);

	void Create_In_Simulator(dWorldID world, OBJECT** allObjects, int numObjects, ACTUATOR** allActuators, int numActuators);

	void Draw(void) const;

	void Read_From_Python(void);
};

#endif // _ACTUATOR_THRUSTER_H
