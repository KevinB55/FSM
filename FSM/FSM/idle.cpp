#include "idle.h"

void Idle::jumping(Animation * a)
{
	cout << "Jumping" << endl;
	a->setCurrent(new Idle());
	delete this;
}

void Idle::climbing(Animation * a)
{
	cout << "Climbing" << endl;
	a->setCurrent(new Idle());
	delete this;
}

void Idle::swordmanship(Animation * a)
{
	cout << "Swording" << endl;
	a->setCurrent(new Idle());
	delete this;
}

void Idle::hammering(Animation * a)
{
	cout << "Hammering" << endl;
	a->setCurrent(new Idle());
	delete this;
}

void Idle::walking(Animation * a)
{
	cout << "Walking" << endl;
	a->setCurrent(new Idle());
	delete this;
}

void Idle::shovelling(Animation * a)
{
	cout << "Digging" << endl;
	a->setCurrent(new Idle());
	delete this;
}
