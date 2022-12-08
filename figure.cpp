#include <iostream>
#include "figure.h"
#include "view.h"


const int Figure::ideal_sides = 0;
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

Figure::Figure(
		int a,
		int b,
		int c,
		int A,
		int B,
		int C,
		std::string name, 
		int sides
		) : 
/*				_a(a),
				_b(b),
				_c(c),
				_A(A),
				_B(B),
				_C(C),
*/				
				_name(name),
				_sides(sides)
{
	side_arr = new int[_sides]{a, b, c};
	angle_arr = new int[_sides]{A, B, C};
}

Figure::Figure(
		int a,
		int b,
		int c,
		int d,
		int A,
		int B,
		int C,
		int D,
		std::string name, 
		int sides
		) : 
/*				_a(a),
				_b(b),
				_c(c),
				_d(d),
				_A(A),
				_B(B),
				_C(C),
				_D(D),
*/			
				_name(name),
				_sides(sides)
{
	side_arr = new int[_sides]{a, b, c, d};
	angle_arr = new int[_sides]{A, B, C, D};
}

std::string Figure::getName()
{
	return _name;
}

Figure::~Figure()
{
//	bool check = false;

	if (side_arr != nullptr)
	{
		delete[] side_arr;
		side_arr = nullptr;
	//	check = true;
	}

	if (angle_arr != nullptr)
	{
		delete[] angle_arr;
		angle_arr = nullptr;
	//	check = check ? true : false;
	}
/*
	if(check)
	{
		std::cout << "Object destracted" << std::endl;
	}
	else
	{
		std::cout << "Dynamic array in object not delated!" << std::endl;
	}
*/
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
	return _sides == ideal_sides;
}

void Figure::getInfo()
{
		std::cout << _name << ":" << std::endl;
		std::cout << (checking() ? view::correct : view::wrong) << std::endl;
		std::cout << view::count_sides << _sides << std::endl;
		std::cout <<  std::endl;
}
