#pragma once
#include <iostream>

class IDrawBehavior
{
public:
	IDrawBehavior();
	~IDrawBehavior();

	virtual void draw()
	{
		std::cout << "Draw default" << std::endl;
		return;
	}
};

