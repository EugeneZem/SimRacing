#include <iostream>
#include "centaur.h"
#include "walkings.h"
#include "players.h"

Centaur::Centaur()
{
	name = "Кентавр";
	speed = 15;
	activity = 8;
	relax = new float[2];
	relax[0] = 1;
	relax[1] = 2;
	}

Centaur::~Centaur() {}