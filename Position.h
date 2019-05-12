#pragma once



struct Position
{
public:
	Position(int x, int y) { this->x = x; this->y = y; };
	Position() = default;
	int x;
	int y;
};
