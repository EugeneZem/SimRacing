#include <iostream>
#include "broom.h"
#include "flyings.h"
#include "players.h"

Broom::Broom()
{
	_name = "Метла";
	_speed = 20;
}

Broom::~Broom() {}

float Broom::run(int dist)
{
	float reduc = (float)(100 - (dist / 1000)) / 100;
	return dist * reduc / _speed;
}