#pragma once
#include "flyings.h"

class Eagle : public Flyings
{
public:
	Eagle();
	~Eagle();

	float reduced(int dist) override;
private:

};