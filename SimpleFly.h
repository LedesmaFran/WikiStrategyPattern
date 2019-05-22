#pragma once
#include "IFlyBehavior.h"
class SimpleFly :
	public IFlyBehavior
{
public:
	SimpleFly();
	~SimpleFly();

	void fly()
	{
		std::cout << "Vuelo simple" << std::endl;
	}
};

