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


//float Walkings::run(int dist)
//{
//	float result = dist / _speed;
//	int relaxCount = result / _activity - 1;
//	int relaxInd = 1;
//	while (relaxCount > 0)
//	{
//		if (relaxInd < _relax[0])
//		{
//			result = result + _relax[relaxInd++];
//		}
//		else
//		{
//			result = result + _relax[(int)_relax[0]];
//		}
//		relaxCount--;
//	}
//	return result;
//}