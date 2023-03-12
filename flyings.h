#pragma once
#include<vector>
#include "players.h"

class Flyings : public Players
{
public:
	Flyings();
	~Flyings();
	virtual void reduced(int* dist, float* reduc);

	virtual float run(int* dist);
		
protected:
};