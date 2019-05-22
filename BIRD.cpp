#include "BIRD.h"





BIRD::~BIRD()
{
	delete fb;
	delete sb;
	delete db;
	delete eb;
	std::cout << "bird Deleted" << std::endl;
}


void BIRD::SetFlyBehavior(FlyType fb)
{
	delete this->fb;
	switch (fb)
	{
	case FlyType::NoFly: this->fb = new NoFly();
		break;

	case FlyType::SimpleFly: this->fb = new SimpleFly();
		break;

	case FlyType::ShortFly: this->fb = new ShortFly();
		break;
	default: this->fb = new IFlyBehavior();
	}
}


void BIRD::SetEatBehavior(EatType eb)
{
	delete this->eb;
	switch (eb)
	{
	case EatType::Scavenger: this->eb = new Scavenger();
		break;

	case EatType::Fishes: this->eb = new Fishes();
		break;

	default: this->eb = new IEatBehavior();
	}
}

void BIRD::SetSoundBehavior(SoundType sb)
{
	delete this->sb;
	switch (sb)
	{
	case SoundType::Quack: this->sb = new Quack();
		break;

	case SoundType::Squawk: this->sb = new Squawk();
		break;

	case SoundType::Shriek: this->sb = new Shriek();
		break;
	default: this->sb = new ISoundBehavior();
	}
}


void BIRD::SetDrawBehavior(DrawType db)
{
	delete this->db;
	switch (db)
	{
	case DrawType::DrawText: this->db = new DrawText();
		break;

	case DrawType::DrawGraphics: this->db = new DrawGraphics();
		break;

	default: this->db = new IDrawBehavior();
	}
}