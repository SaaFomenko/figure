#include <string>
#include "define.h"

std::string Figure::getSides()
{
	const std::string s = std::to_string(sides);
	return name + s;
}

std::string Triangle::getSides()
{
	const std::string s = std::to_string(sides);
	return name + s;
}

std::string Quadrangle::getSides()
{
	const std::string s = std::to_string(sides);
	return name + s;
}
