#pragma once
#include "ISoundBehavior.h"
class Quack :
	public ISoundBehavior
{
public:
	Quack();
	~Quack();

	void sound()
	{
		std::cout << "Quack!" << std::endl;
	}
};

