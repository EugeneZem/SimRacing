#pragma once
#include "flyings.h"

class Eagle : public Flyings
{
public:
	Eagle();
	~Eagle();

	void reduced(int* dist, float* reduc);
	float run(int* dist) override;

private:

};