#pragma once
#include "flyings.h"

class Eagle : public Flyings
{
public:
	Eagle();
	~Eagle();

	float run(int dist) override;

private:

};