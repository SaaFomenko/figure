#include <string>
#include "define.h"

void Figure::getStr(std::string name, int sides)
{
	str += name;
	str += std::to_string(sides);
}

void Figure::getSides()
{
	getStr(name, sides);
}

void Triangle::getSides()
{
	getStr(name, sides);
}

void Quadrangle::getSides(){
	getStr(name, sides);
}
