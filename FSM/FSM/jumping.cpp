#include "jumping.h"

void Jumping::idle(Animation * a)
{
	cout << "Going from Jumping to Idling" << endl;
	a->setCurrent(new Idle());
	delete this;
}
