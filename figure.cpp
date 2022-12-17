#include <iostream>
#include "figure.h"
#include "view.h"


const std::string view::count_sides = "Количество сторон: ";
const std::string FIGURE = "Фигура";
const std::string view::correct = "Правильная";
const std::string view::wrong = "Неправильная";


Figure::Figure(
		std::string name,
		int sides
		) :
				_name(name),
				_sides(sides),
				ideal_sides(0)
{}

Figure::Figure() : Figure(FIGURE, 0)
{}

Figure::~Figure(){}

bool Figure::checking()
{
	return _sides == ideal_sides;
}

void Figure::getInfo()
{
		std::cout << _name << ":" << std::endl;
		std::cout << (checking() ? view::correct : view::wrong) << 
			std::endl;
		std::cout << view::count_sides << _sides << std::endl;
		std::cout <<  std::endl;
}
