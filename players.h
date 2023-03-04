#pragma once
#include<iostream>

class Players
{
public:
	Players();
	~Players();

protected:
	std::string name;
	int speed;
	int activity;
	int* relax;
	bool flay;
};