#include <iostream>
#include "eagle.h"
#include "flyings.h"
#include "players.h"

Eagle::Eagle()
{
	_name = "����";
	_speed = 8;
}

Eagle::~Eagle() {}

float Eagle::reduced(int dist)
{
	return 0.94;
}
