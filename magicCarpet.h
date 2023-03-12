#pragma once
#include "flyings.h"

class MagicCarpet : public Flyings
{
public:
	MagicCarpet();
	~MagicCarpet();

	void reduced(int* dist, float* reduc);
	float run(int* dist) override;

private:

};