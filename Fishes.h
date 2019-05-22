#pragma once
#include "IEatBehavior.h"
class Fishes :
	public IEatBehavior
{
public:
	Fishes();
	~Fishes();

	void eat()
	{
		std::cout << "Como peces" << std::endl;
	}
};

