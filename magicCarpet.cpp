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

float MagicCarpet::reduced(int dist)
{
	if (dist > 1000 ) { return  1; }
	if (dist >= 1000 && dist < 5000) { return 0.97; }
	if (dist >= 5000 && dist < 10000) { return 0.9; }
	if (dist >= 10000) { return 0.95; }
}
