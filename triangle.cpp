#include <iostream>
#include "triangle.h"
#include "view.h"


const std::string TRIANGLE = "Треугольник";
const std::string RIGHT_TRIANGLE = "Прямоугольный треугольник";
const std::string ISOSCELES_TRIANGLE = "Равнобедренный треугольник";
const std::string IQUILATERAL_TRIANGLE = "Равносторонний треугольник";

bool Triangle::isSum()
{
	int sum_angles = _A + _B + _C;

	bool check = _sum_angles == sum_angles && _sides == ideal_sides;

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
				ideal_sides(3),
				_sum_angles(180),
				Figure(name, sides)
{}

Triangle::~Triangle(){}

bool RightTriangle::checking()
{
	bool check = _C == _sum_angles/2;

	return isSum() && check;
}

RightTriangle::RightTriangle() : 
	Triangle(10, 20, 30, 50, 60, 90, RIGHT_TRIANGLE, 3)
{}

RightTriangle::RightTriangle(int a, int b, int c, int A, int B) : 
	Triangle(a, b, c, A, B, 90, RIGHT_TRIANGLE, 3)
{}

RightTriangle::~RightTriangle(){}

bool IsoscelesTriangle::checking()
{
	bool check = _a == _c && _A == _C;

	return isSum() && check;
}
IsoscelesTriangle::IsoscelesTriangle() : 
	Triangle(10, 20, 10, 50, 60, 50, ISOSCELES_TRIANGLE, 3)
{}

IsoscelesTriangle::~IsoscelesTriangle(){}

IsoscelesTriangle::IsoscelesTriangle(int a, int b, int A, int B) : 
	Triangle(a, b, a, A, B, A, ISOSCELES_TRIANGLE, 3)
{}

bool IquilateralTriangle::checking()
{
	int angle = _sum_angles / ideal_sides;
	bool check = _a == _b && _b == _c && _A == _B && _B == _C &&
		_A == angle && _B == angle && _C == angle;

	return isSum() && check;
}

IquilateralTriangle::IquilateralTriangle() : 
	Triangle(30, 30, 30, 60, 60, 60, IQUILATERAL_TRIANGLE, 3)
{}

IquilateralTriangle::IquilateralTriangle(int a) : 
	Triangle(a, a, a, 60, 60, 60, IQUILATERAL_TRIANGLE, 3)
{}

IquilateralTriangle::~IquilateralTriangle(){}
