#pragma once
#include <iostream>
class IEatBehavior
{
public:
	IEatBehavior();
	~IEatBehavior();
	virtual void eat() 
	{
		std::cout << "Eat default" << std::endl;
		return; 
	}


};

