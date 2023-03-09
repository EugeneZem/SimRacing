#pragma once
#include<vector>
#include "players.h"

class Walkings : public Players
{
public:
	Walkings();
	~Walkings();
	int activity();
	float relax(int count);
	float run(int dist);

//	Walkings operator = (Boots boots);
	
protected:
	int _activity;
	std::vector <float> _relax;
//	float* _relax;
};