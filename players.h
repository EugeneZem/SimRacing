#pragma once
#include<iostream>

class Players
{
public:
	Players();
	~Players();
	std::string name();
	int speed();

protected:
	std::string _name;
	int _speed;
};