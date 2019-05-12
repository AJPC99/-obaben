#include <SFML/Graphics.hpp>
#include <memory>
#include "Position.h"
#pragma once



class Person
{
protected:
	int health;
	Position position;
	std::shared_ptr<sf::Image> image;
	bool isAlive;
	bool isSick;
public:
	explicit Person(Position);
	virtual void move() = 0;
	bool getIsAlive();
	sf::Color getColor();
};

