#pragma once
#include<vector>
#include "players.h"

class Flyings : public Players
{
public:
	Flyings();
	~Flyings();
	virtual float reduced(int dist);
	
	//float run(int dist);

protected:
};