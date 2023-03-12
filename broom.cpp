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

void Broom::reduced(int* dist, float* reduc)
{
	*reduc = (100 - (int)(*dist / 1000)) / 100;
}

float Broom::run(int* dist)
{
	float reduc = (100 - (int)(*dist / 1000)) / 100;
	return *dist * reduc / _speed;
}