#pragma once
#include "animation.h"
#include <iostream>
using namespace std;

class State
{
public:
	virtual void idle(Animation* a)
	{
		cout << "State::Idling" << endl;
	}

	virtual void jumping(Animation* a)
	{
		cout << "State::Jumping" << endl;
	}

	virtual void climbing(Animation* a)
	{
		cout << "State::Climbing" << endl;
	}

	virtual void walking(Animation* a)
	{
		cout << "State::Walking" << endl;
	}

	virtual void swordmanship(Animation* a)
	{
		cout << "State::Swording" << endl;
	}

	virtual void hammering(Animation* a)
	{
		cout << "State::Hammering" << endl;
	}

	virtual void shovelling(Animation* a)
	{
		cout << "State::Shovelling" << endl;
	}
};
