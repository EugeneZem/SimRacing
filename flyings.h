#pragma once
#include<vector>
#include "players.h"

class Flyings : public Players
{
public:
	Flyings();
	~Flyings();

	float run(int dist) = 0;
		
protected:
};