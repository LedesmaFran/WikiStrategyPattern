#include <iostream>
#include "BIRD.h"

using namespace std;

int main()
{
	
	BIRD pinguino("Pinguino");

	pinguino.SetFlyBehavior(FlyType::NoFly);
	pinguino.SetEatBehavior(EatType::Fishes);
	pinguino.SetSoundBehavior(SoundType::Squawk);
	pinguino.SetDrawBehavior(DrawType::DrawText);

	cout << "----Bird status----" << endl;
	pinguino.PrintName();
	pinguino.fly();
	pinguino.sound();
	pinguino.eat();
	pinguino.draw();

	system("pause");
	pinguino.SetFlyBehavior(FlyType::SimpleFly);
	pinguino.SetSoundBehavior(SoundType::Quack);

	system("cls");
	cout << "----Bird status----" << endl;
	pinguino.PrintName();
	pinguino.fly();
	pinguino.sound();
	pinguino.eat();
	pinguino.draw();
	system("pause");


	system("cls");

	BIRD Eagle("Aguila");

	Eagle.SetDrawBehavior(DrawType::DrawText);
	Eagle.SetEatBehavior(EatType::Scavenger);
	Eagle.SetFlyBehavior(FlyType::SimpleFly);
	Eagle.SetSoundBehavior(SoundType::Shriek);

	cout << "----Bird status----" << endl;
	Eagle.PrintName();
	Eagle.fly();
	Eagle.sound();
	Eagle.eat();
	Eagle.draw();
	system("pause");


}
