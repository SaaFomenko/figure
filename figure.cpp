#include <string>
#include "define.h"

Figure::Figure(
		std::string name, 
		int sides
		) : 
				_name(name),
				_sides(sides)
{}

std::string Figure::getName()
{
	return _name;
}

int Figure::getSides()
{
	return _sides;
}

Triangle::Triangle() : Figure("Трехугольник", 3)
{}

Quadrangle::Quadrangle() : Figure("Четырехугольник", 4)
{}
