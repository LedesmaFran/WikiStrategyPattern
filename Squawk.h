#pragma once
#include "ISoundBehavior.h"
class Squawk :
	public ISoundBehavior
{
public:
	Squawk();
	~Squawk();

	void sound()
	{
		std::cout << "Squawk!" << std::endl;
	}
};

