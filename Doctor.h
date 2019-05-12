#include "Person.h"
#pragma once



class Doctor : public Person
{
public:
	Doctor(Position);
	void move();
};
