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

Triangle::Triangle() : Figure("Треугольник", 3)
{}

Triangle::Triangle(
		std::string name, 
		int sides
		) : 
				Figure(name, sides)	
{}

Quadrangle::Quadrangle() : Triangle("Четырехугольник", 4)
{}
