#pragma once
#include "IEatBehavior.h"
class Scavenger :
	public IEatBehavior
{
public:
	Scavenger();
	~Scavenger();

	void eat()
	{
		std::cout << "Como carne" << std::endl;
	}
};

