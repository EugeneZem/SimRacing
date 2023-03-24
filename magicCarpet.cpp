#include <iostream>
#include"magicCarpet.h"
#include "flyings.h"
#include "players.h"

MagicCarpet::MagicCarpet()
{
	_name = "Ковер-самолет";
	_speed = 10;
}

MagicCarpet::~MagicCarpet() {}

float MagicCarpet::run(int dist)
{
	float reduc;
	if (dist < 1000) { reduc = 1; }
	if (dist >= 1000 && dist < 5000) { reduc = 0.97; }
	if (dist >= 5000 && dist < 10000) { reduc = 0.9; }
	if (dist >= 10000) { reduc = 0.95; }
	return dist * reduc / _speed;
}