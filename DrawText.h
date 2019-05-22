#pragma once
#include "IDrawBehavior.h"
class DrawText :
	public IDrawBehavior
{
public:
	DrawText();
	~DrawText();
	void Draw() 
	{
		std::cout << "Draw text" << std::endl;
	}
};

