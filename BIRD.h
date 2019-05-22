#pragma once
#include "IDrawBehavior.h"
#include "DrawGraphics.h"
#include "DrawText.h"


#include "IEatBehavior.h"
#include "Scavenger.h"
#include "Fishes.h"


#include "IFlyBehavior.h"
#include "NoFly.h"
#include "SimpleFly.h"
#include "ShortFly.h"


#include "ISoundBehavior.h"
#include "Quack.h"
#include "Squawk.h"
#include "Shriek.h"

#include<string>

enum class FlyType{ NoFly,ShortFly,SimpleFly };
enum class DrawType{DrawText, DrawGraphics};
enum class EatType {Fishes, Scavenger};
enum class SoundType {Quack, Shriek, Squawk};

class BIRD
{
public:
	BIRD(std::string name)
	{
		std::cout << "Created New Bird: " << name << std::endl;
		this->fb = new IFlyBehavior();
		this->eb = new IEatBehavior();
		this->db = new IDrawBehavior();
		this->sb = new ISoundBehavior();
		this->name = name;
	};

	
	~BIRD();
	void SetFlyBehavior(FlyType fb);
	void SetEatBehavior(EatType eb);
	void SetSoundBehavior(SoundType sb);
	void SetDrawBehavior(DrawType db);


	void PrintName() { std::cout << "Bird Name: " << this->name << std::endl; }


	void fly() { this->fb->fly(); }
	void eat() { this->eb->eat(); }
	void sound() { this->sb->sound(); }
	void draw() { this->db->draw(); }

private:
	IFlyBehavior* fb;
	IEatBehavior* eb;
	IDrawBehavior* db;
	ISoundBehavior* sb;
	std::string name;
};

