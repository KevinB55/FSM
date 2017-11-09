#pragma once
#include "state.h"

class Idle : public State
{
public:
	Idle() {};
	~Idle() {};
	void jumping(Animation* a);
	void climbing(Animation* a);
	void swordmanship(Animation* a);
	void hammering(Animation* a);
	void walking(Animation* a);
	void shovelling(Animation* a);
};