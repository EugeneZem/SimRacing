#include <iostream>
#include "eagle.h"
#include "flyings.h"
#include "players.h"

Eagle::Eagle()
{
	_name = "Орел";
	_speed = 8;
}

Eagle::~Eagle() {}

void Eagle::reduced(int* dist, float* reduc)
{
	*reduc = 0.94;
}


float Eagle::run(int* dist)
{
	float reduc = 0.94;
	return *dist * reduc / _speed;
}