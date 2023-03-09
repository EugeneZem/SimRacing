#include <iostream>
#include "boots.h"
#include "walkings.h"
#include "players.h"

Boots::Boots()
{
	_name = "Ботинки-вездеходы";
	_speed = 6;
	_activity = 60;
	_relax = { 2, 10, 5 };
}

Boots::~Boots() {}