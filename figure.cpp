#include <iostream>
#include "figure.h"


const std::string view::count_sides = "Количество сторон: ";
const std::string view::correct = "Правильная";
const std::string view::wrong = "Неправильная";

/*
FigureSidesException::FigureSidesException(int sides) : _sides(sides)
{}

int FigureSidesException::getSides()
{
	return _sides;
}

const char* FigureSidesException::what() const noexcept
{
	return "количество сторон не равно ";
}
*/

Figure::Figure(
		std::string name,
		int sides
		) :
				_name(name),
				_sides(sides),
				_ideal_sides(0)
{}

Figure::Figure() : Figure("Фигура", 0)
{}

Figure::Figure(int sides) : Figure("Фигура", sides)
{
	if (!checking()) throw FigureException(sides);
	createInfo();
}

Figure::~Figure(){}

void Figure::createInfo()
{
	std::cout << _name << " (сторон " << _sides << ") создан." <<
		std::endl;
}

bool Figure::checking()
{
	return _sides == _ideal_sides;
}

void Figure::getInfo()
{
		std::cout << _name << ":" << std::endl;
		std::cout << (checking() ? view::correct : view::wrong) << 
			std::endl;
		std::cout << view::count_sides << _sides << std::endl;
		std::cout <<  std::endl;
}

FigureException::FigureException(int sides) : 
//	_sides(sides),
	Figure("Фигура", sides)
{}

void FigureException::createInfo()
{
	std::cout << _name << " (сторон " << _sides << 
		") не был создан. Причина: количество сторон не равно " << 
		_ideal_sides << "." << std::endl;
}
