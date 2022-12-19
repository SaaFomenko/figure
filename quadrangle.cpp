#include <iostream>
#include "quadrangle.h"


const std::string QUADRANGLE = "Четырехугольник";


void Quadrangle::getInfo()
{
		std::cout << _name << ":" << std::endl;
		std::cout << (checking() ? view::correct : view::wrong) << 
			std::endl;
		std::cout << view::count_sides << _sides << std::endl;
		std::cout << view::sides << view::a << _a << view::b <<
			_b << view::c << _c << view::d << _d << std::endl;
		std::cout << view::angles << view::A << _A << view::B <<
			_B << view::C << _C << view::D << _D << std::endl;
		std::cout <<  std::endl;
}

bool Quadrangle::isSum()
{
	int sum_angles = _A + _B + _C + _D;

	bool check = _sum_angles == sum_angles && _sides == ideal_sides;

	return check;
}

bool Quadrangle::checking()
{
	return isSum();
}

Quadrangle::Quadrangle() : 
	Quadrangle(10, 20, 30, 40, 50, 60, 70, 80, QUADRANGLE, 4)
{}

Quadrangle::Quadrangle(
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
				_a(a),
				_b(b),
				_c(c),
				_d(d),
				_A(A),
				_B(B),
				_C(C),
				_D(D),
				ideal_sides(4),
				_sum_angles(360),
				Figure(name, sides)
{}

Quadrangle::~Quadrangle(){}

