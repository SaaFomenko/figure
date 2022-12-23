#include <iostream>
#include "figure.h"


FigureException::FigureException(std::string str) : _err(str)
{}

const char* FigureException::what() const noexcept
{
	return _err.c_str();
}

FigureException::~FigureException(){}

Figure::Figure(
		std::string name,
		int sides,
		int ideal_sides
		) :
				_name(name),
				_sides(sides),
				_ideal_sides(ideal_sides)
{}

Figure::Figure() : Figure("Фигура", 0, 0)
{}

Figure::Figure(int sides) : Figure("Фигура", sides, 0)
{
	std::cout << getCreate() << std::endl;
}

Figure::~Figure(){}

void Figure::errCheck(std::string& str)
{
	if (isSides())
	{
		str += " создан.";
	}
	else
	{
		str += " не создан. Причина: количество сторон не равно " +
			std::to_string(_ideal_sides);
		throw FigureException(str);
	}
}

std::string Figure::getCreate()
{
	std::string str = _name + " (сторон " + std::to_string(_sides) + ")";

	errCheck(str);

	return str;
}

bool Figure::isSides()
{
	return _sides == _ideal_sides;
}
