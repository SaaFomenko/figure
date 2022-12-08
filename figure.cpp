#include <iostream>
#include "figure.h"

const std::string TRIANGLE = "Треугольник";

Figure::Figure(
		std::string name,
		int sides 
		) :
				_sides(sides),
				_name(name)
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
//Triangle::Triangle() : Figure(TRIANGLE, 3)
//{}

Triangle::Triangle() : Figure(10, 20, 30, 50, 60, 70, TRIANGLE, 3)
{}

/*
Triangle::Triangle(
		int a, 
		int b,
		int c,
		int A,
		int B,
		int C
		) : Figure(a, b, c, d, A, B, C, TRIANGLE, 3)
{}
*/

Quadrangle::Quadrangle() : 
	Figure(10, 20, 30, 40, 50, 60, 70, 80, "Четырехугольник", 4)
{}
