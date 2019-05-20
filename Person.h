#include <SFML/Graphics.hpp>
#include <memory>
#include "RandomGenerator.h"
#include "Position.h"
#pragma once



class Person
{
protected:
	bool isAlive;
	Position position;
	sf::Color color;
	std::shared_ptr<sf::Image> image;
	Person(const Position&);
public:
	void setImage(std::shared_ptr<sf::Image>&);
	virtual void move() = 0;
};
