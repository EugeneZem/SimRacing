#pragma once
#include "players.h"

class Walkings : public Players
{
public:
	Walkings();
	~Walkings();
	float run(int dist);

protected:
	int speed;
	int activity;
	float* relax;
};