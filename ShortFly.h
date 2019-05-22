#pragma once
#include "IFlyBehavior.h"
class ShortFly :
	public IFlyBehavior
{
public:
	ShortFly();
	~ShortFly();

	void fly()
	{
		std::cout << "Vuelo de corta distancia" << std::endl;
	}
};

