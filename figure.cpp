#include <iostream>
#include "figure.h"


const std::string view::count_sides = "Количество сторон: ";
const std::string view::correct = "Правильная";
const std::string view::wrong = "Неправильная";


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
