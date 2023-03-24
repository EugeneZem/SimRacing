#pragma once
#include "flyings.h"

class Broom : public Flyings
{
public:
	Broom();
	~Broom();
	
	float run(int dist) override;

private:

};