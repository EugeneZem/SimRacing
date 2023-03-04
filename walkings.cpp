#include <iostream>
#include "walkings.h"
#include "players.h"

Walkings::Walkings() {}


Walkings::~Walkings()
{
	delete[] relax;
}

float Walkings::run(int dist)
{
	float result = dist / speed;
	int relaxCount = result / activity - 1;
	int relaxInd = 1;
	while (relaxCount > 0)
	{
		if (relaxInd < relax[0])
		{
			result = result + relax[relaxInd++];
		}
		else
		{
			result = result + relax[(int)relax[0]];
		}
		relaxCount--;
	}
	return result;
}