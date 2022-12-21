#include <iostream>
#include "triangle.h"


const std::string TRIANGLE = "Треугольник";

bool Triangle::isSum()
{
	int sum_angles = _A + _B + _C;

	bool check = true;

	if	(!_sum_angles == sum_angles)
	{
		std::string str = _name + " (стороны " + _a ",)"
	}	&& _sides == _ideal_sides;

	return check;
}

bool Triangle::checking()
{ 
	return isSum();
}

Triangle::Triangle() : 
	Triangle(10, 20, 30, 50, 60, 70, TRIANGLE, 3)
{}

void Triangle::getInfo()
{
		std::cout << _name << ":" << std::endl;
		std::cout << (checking() ? view::correct : view::wrong) << 
			std::endl;
		std::cout << view::count_sides << _sides << std::endl;
		std::cout << view::sides << view::a << _a << view::b <<
			_b << view::c << _c << std::endl;
		std::cout << view::angles << view::A << _A << view::B <<
			_B << view::C << _C << std::endl;
		std::cout <<  std::endl;
}

Triangle::Triangle(
		int a, 
		int b, 
		int c, 
		int A, 
		int B, 
		int C,
		std::string name,
		int sides
	 	) :
				_a(a),
				_b(b),
				_c(c),
				_A(A),
				_B(B),
				_C(C),
				_ideal_sides(3),
				_sum_angles(180),
				Figure(name, sides)
{}

Triangle::~Triangle(){}

