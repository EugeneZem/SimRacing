#pragma once
#include "flyings.h"

class MagicCarpet : public Flyings
{
public:
	MagicCarpet();
	~MagicCarpet();

	float run(int dist) override;

private:

};