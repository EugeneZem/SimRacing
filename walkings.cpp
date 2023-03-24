#include <iostream>
#include "walkings.h"
#include "players.h"


Walkings::Walkings() {}


Walkings::~Walkings()
{
	_relax.clear();
}

int Walkings::activity() { return _activity; }

float Walkings::relax(int count)
{
	return _relax[count];
}


float Walkings::run(int dist)
{
	float result = dist / _speed;
	int relaxCount;
	if (((dist / _speed) % _activity) == 0)
	{
		relaxCount = result / _activity - 1;
	}
	else
	{
		relaxCount = result / _activity;
	}
	int relaxInd = 0;
	while (relaxCount > 0)
	{
		if (relaxInd < _relax.size())
		{
			result = result + _relax[relaxInd];
			relaxInd++;
		}
		else
		{
			result = result + _relax[(_relax.size() - 1)];
		}
		relaxCount--;
	}
	return result;
}