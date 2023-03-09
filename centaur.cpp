#include <iostream>
#include "centaur.h"
#include "walkings.h"
#include "players.h"

Centaur::Centaur()
{
	_name = "Кентавр";
	_speed = 15;
	_activity = 8;
	_relax = { 2 };
}

Centaur::~Centaur() {}