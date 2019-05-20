#include "Person.h"



Person::Person(const Position& position)
{
	isAlive = true;
	this->position = position;
}

void Person::setImage(std::shared_ptr<sf::Image>& image)
{
	this->image = image;
	image->setPixel(position.x, position.y, color);
}
