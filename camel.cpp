#include <iostream>
#include "camel.h"
#include "walkings.h"
#include "players.h"

Camel::Camel()
{
	_name = "Верблюд";
	_speed = 10;
	_activity = 30;
	_relax = { 2, 5, 8 };
}

Camel::~Camel() {}