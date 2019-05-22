#pragma once
#include "IDrawBehavior.h"
class DrawGraphics :
	public IDrawBehavior
{
public:
	DrawGraphics();
	~DrawGraphics();
	void Draw()
	{
		std::cout << "Draw Graphics" << std::endl;
	}
};

