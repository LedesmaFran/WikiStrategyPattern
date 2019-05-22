#pragma once
#include "IFlyBehavior.h"
class NoFly :
	public IFlyBehavior
{
public:
	NoFly();
	~NoFly();
	void fly()
	{
		std::cout << "No puedo volar" << std::endl;
	}
};

