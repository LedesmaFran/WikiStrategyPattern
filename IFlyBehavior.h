#pragma once
#include <iostream>


class IFlyBehavior
{
public:
	IFlyBehavior();
	~IFlyBehavior();
	virtual void fly() 
	{
		std::cout << "Fly default" << std::endl;
		return; 
	}
};

