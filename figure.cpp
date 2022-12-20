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
	if (!checking()) throw FigureException(_ideal_sides);
}

Figure::~Figure(){}

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

FigureException::FigureException(int sides) : Figure("Фигура", sides)
{}
