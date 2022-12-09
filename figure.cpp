#include <iostream>
#include "figure.h"
#include "view.h"


const std::string view::count_sides = "Количество сторон: ";
const std::string FIGURE = "Фигура";

Figure::Figure(
		std::string name,
		int sides 
		) :
				_sides(sides),
				_name(name)
{}

Figure::Figure() : Figure(FIGURE, 0)
{}

std::string Figure::getName()
{
	return _name;
}

Figure::~Figure()
{
	if (side_arr != nullptr)
	{
		delete[] side_arr;
		side_arr = nullptr;
	}

	if (angle_arr != nullptr)
	{
		delete[] angle_arr;
		angle_arr = nullptr;
	}
}

int Figure::getCountSides()
{
	return _sides;
}

int* Figure::getSides()
{
	return side_arr;
}

int* Figure::getAngles()
{
	return angle_arr;
}

bool Figure::checking()
{
	is_sides = _sides == 0;
	return is_sides;
}

void Figure::getInfo()
{
		std::cout << _name << ":" << std::endl;
		std::cout << (checking() ? view::correct : view::wrong) << std::endl;
		std::cout << view::count_sides << _sides << std::endl;
		std::cout <<  std::endl;
}
