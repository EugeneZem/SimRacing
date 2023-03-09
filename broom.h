#pragma once
#include "flyings.h"

class Broom : public Flyings
{
public:
	Broom();
	~Broom();
	float reduced(int dist) override;

private:

};