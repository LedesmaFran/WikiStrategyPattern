#pragma once
#include "ISoundBehavior.h"
class Shriek :
	public ISoundBehavior
{
public:
	Shriek();
	~Shriek();
	void sound()
	{
		std::cout << "Shriek!" << std::endl;
	}
};

