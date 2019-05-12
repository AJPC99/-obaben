#include <SFML/Graphics.hpp>
#include <memory>
#include "Position.h"
#pragma once



class MapInterpreter
{
protected:
	std::shared_ptr<sf::Image> image;
	std::vector<Position> lands;
public:
	MapInterpreter(const std::string&);
	void readMap(const std::string&);
};

