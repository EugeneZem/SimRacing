#include <iostream>
#include "camelFast.h"
#include "walkings.h"
#include "players.h"

CamelFast::CamelFast()
{
	_name = "Верблюд быстроход";
	_speed = 40;
	_activity = 10;
	_relax = { 5, 6.5, 8 };
}

CamelFast::~CamelFast() {}