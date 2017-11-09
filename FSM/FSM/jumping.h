#pragma once
#include "state.h"
#include "idle.h"

class Jumping : public State
{
public:
	Jumping() {};
	~Jumping() {};
	void idle(Animation* a);
};
