	#include "RandomGenerator.h"
#include "Person.h"
#pragma once



class Doctor : public Person
{
private:
	RandomGenerator r;
	void moveCase(int, int);
public:
	Doctor(const Position&, int);
	void move();
};
