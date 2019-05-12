#include "Person.h"
#include "MapInterpreter.h"
#pragma once



class World : public MapInterpreter
{
private:
	std::vector<Person> people;
	sf::RenderWindow window;
	sf::Event event;
	void setPeoplePositions(int);
	void movePeople();
	void deleteDeadPeople();
	void draw();

public:
	World(int, int, int, int, const std::string&);

};

