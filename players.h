#pragma once
#include<iostream>

class Players
{
public:
	Players();
	~Players();

	std::string name();
	int speed();
	virtual float run(int dist) = 0;

protected:
	std::string _name;
	int _speed;
};