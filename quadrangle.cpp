#include <iostream>
#include "quadrangle.h"
#include "view.h"


const std::string QUADRANGLE = "Четырехугольник";
const std::string RIGHT_QUADRANGLE = "Прямоугольник";
const std::string QUADRATE = "Квадрат";
const std::string PARALLELOGRAM = "Параллелограмм";
const std::string RHOMB = "Ромб";


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

bool RightQuadrangle::checking()
{
	int angle = _sum_angles / ideal_sides;
	bool check = _A == angle && _A == _B && _B == _C &&
		_C == _D && _a == _c && _b == _d;

	return isSum() && check;
}

RightQuadrangle::RightQuadrangle() : 
	Quadrangle(10, 20, 10, 20, 90, 90, 90, 90, RIGHT_QUADRANGLE, 4)
{}

RightQuadrangle::RightQuadrangle(int a, int b) : 
	Quadrangle(a, b, a, b, 90, 90, 90, 90, RIGHT_QUADRANGLE, 4)
{}

RightQuadrangle::~RightQuadrangle(){}

bool Quadrate::checking()
{
	int angle = _sum_angles / ideal_sides;
	bool check = _A == angle && _A == _B && _B == _C &&
		_C == _D && _a == _b && _b == _c && _c == _d;

	return isSum() && check;
}

Quadrate::Quadrate() : 
	Quadrangle(20, 20, 20, 20, 90, 90, 90, 90, QUADRATE, 4)
{}

Quadrate::Quadrate(int a) : 
	Quadrangle(a, a, a, a, 90, 90, 90, 90, QUADRATE, 4)
{}

Quadrate::~Quadrate(){}

bool Parallelogram::checking()
{
	bool check = _A == _C && _B == _D && _a == _c && _b == _d;

	return isSum() && check;
}

Parallelogram::Parallelogram() : 
	Quadrangle(20, 30, 20, 30, 30, 40, 30, 40, PARALLELOGRAM, 4)
{}

Parallelogram::Parallelogram(int a, int b, int A, int B) : 
	Quadrangle(a, b, a, b, A, B, A, B, PARALLELOGRAM, 4)
{}

Parallelogram::~Parallelogram(){}

bool Rhomb::checking()
{
	bool check = _A == _C && _B == _D &&
		_a == _b && _b == _c && _c == _d;

	return isSum() && check;
}

Rhomb::Rhomb() : 
	Quadrangle(30, 30, 30, 30, 30, 40, 30, 40, RHOMB, 4)
{}

Rhomb::Rhomb(int a, int A, int B) : 
	Quadrangle(a, a, a, a, A, B, A, B, RHOMB, 4)
{}

Rhomb::~Rhomb(){}
