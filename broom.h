#pragma once
#include "flyings.h"

class Broom : public Flyings
{
public:
	Broom();
	~Broom();
	
	void reduced(int* dist, float* reduc);
	float run(int* dist) override;

private:

};