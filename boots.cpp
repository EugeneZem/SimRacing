#include <iostream>
#include "boots.h"
#include "walkings.h"
#include "players.h"

Boots::Boots()
{
	name = "Ботинки-вездеходы";
	speed = 6;
	activity = 60;
	relax = new float[3];
	relax[0] = 2;
	relax[1] = 10;
	relax[2] = 5;
}

Boots::~Boots() {}