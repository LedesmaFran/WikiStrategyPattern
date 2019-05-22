#pragma once
#include <iostream>
class ISoundBehavior
{
public:
	ISoundBehavior();
	~ISoundBehavior();
	virtual void sound() 
	{ 
		std::cout << "Sound default" << std::endl;
		return; 
	}
};

