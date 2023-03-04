#include <iostream>
#include "camelFast.h"
#include "walkings.h"
#include "players.h"

CamelFast::CamelFast()
{
	name = "Верблюд быстроход";
	speed = 40;
	activity = 10;
	relax = new float[4];
	relax[0] = 3;
	relax[1] = 5;
	relax[2] = 6.5;
	relax[3] = 8;
}

CamelFast::~CamelFast() {}