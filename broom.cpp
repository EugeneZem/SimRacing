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

float Broom::reduced(int dist)
{
	return (100 - (int)(dist / 1000)) / 100;
}
