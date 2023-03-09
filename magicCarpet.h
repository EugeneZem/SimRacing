#pragma once
#include "flyings.h"

class MagicCarpet : public Flyings
{
public:
	MagicCarpet();
	~MagicCarpet();
	
	float reduced(int dist) override;

private:

};