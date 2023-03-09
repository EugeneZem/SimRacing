#include <iostream>
#include "flyings.h"
#include "players.h"


Flyings::Flyings() {}


Flyings::~Flyings()
{
	//_relax.clear();
}

float Flyings::reduced(int dist) { return 1; }

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