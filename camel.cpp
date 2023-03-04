#include <iostream>
#include "camel.h"
#include "walkings.h"
#include "players.h"

Camel::Camel()
{
	name = "Верблюд";
	speed = 10;
	activity = 30;
	relax = new float[3];
	relax[0] = 2;
	relax[1] = 5;
	relax[2] = 8;
}

Camel::~Camel() {}