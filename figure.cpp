#include <iostream>
#include "figure.h"

const std::string TRIANGLE = "Треугольник";
const std::string RIGHT_TRIANGLE = "Прямоугольный треугольник";
const std::string ISOSCELES_TRIANGLE = "Равнобедренный треугольник";
const std::string IQUILATERAL_TRIANGLE = "Равнобедренный треугольник";
const std::string QUADRANGLE = "Четырехугольник";
const std::string RIGHT_QUADRANGLE = "Прямоугольник";
const std::string QUADRATE = "Квадрате";
const std::string PARALLELOGRAM = "Параллелограмм";
const std::string RHOMB = "Ромб";

Figure::Figure(
		std::string name,
		int sides 
		) :
				_sides(sides),
				_name(name)
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
//Triangle::Triangle() : Figure(TRIANGLE, 3)
//{}

Triangle::Triangle() : Triangle(10, 20, 30, 50, 60, 70, TRIANGLE, 3)
{}

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
				Figure(name, sides)
{
	side_arr = new int[_sides]{a, b, c};
	angle_arr = new int[_sides]{A, B, C};
}

RightTriangle::RightTriangle() : 
	Triangle(10, 20, 30, 50, 60, 90, RIGHT_TRIANGLE, 3)
{}

RightTriangle::RightTriangle(int a, int b, int c, int A, int B) : 
	Triangle(a, b, c, A, B, 90, RIGHT_TRIANGLE, 3)
{}

IsoscelesTriangle::IsoscelesTriangle() : 
	Triangle(10, 20, 10, 50, 60, 50, ISOSCELES_TRIANGLE, 3)
{}

IsoscelesTriangle::IsoscelesTriangle(int a, int b, int A, int B) : 
	Triangle(a, b, a, A, B, A, ISOSCELES_TRIANGLE, 3)
{}

IquilateralTriangle::IquilateralTriangle() : 
	Triangle(30, 30, 30, 60, 60, 60, IQUILATERAL_TRIANGLE, 3)
{}

IquilateralTriangle::IquilateralTriangle(int a) : 
	Triangle(a, a, a, 60, 60, 60, IQUILATERAL_TRIANGLE, 3)
{}


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
		std::string,
		int sides
		) : 
				Figure(QUADRANGLE, 4)
{
	side_arr = new int[_sides]{a, b, c, d};
	angle_arr = new int[_sides]{A, B, C, D};
}

RightQuadrangle::RightQuadrangle() : 
	Quadrangle(10, 20, 10, 20, 90, 90, 90, 90, RIGHT_QUADRANGLE, 4)
{}

RightQuadrangle::RightQuadrangle(int a, int b) : 
	Quadrangle(a, b, a, b, 90, 90, 90, 90, RIGHT_QUADRANGLE, 4)
{}

Quadrate::Quadrate() : 
	Quadrangle(20, 20, 20, 20, 90, 90, 90, 90, QUADRATE, 4)
{}

Quadrate::Quadrate(int a) : 
	Quadrangle(a, a, a, a, 90, 90, 90, 90, QUADRATE, 4)
{}

Parallelogram::Parallelogram() : 
	Quadrangle(20, 30, 20, 30, 30, 40, 30, 40, PARALLELOGRAM, 4)
{}

Parallelogram::Parallelogram(int a, int b, int A, int B) : 
	Quadrangle(a, b, a, b, A, B, A, B, PARALLELOGRAM, 4)
{}

Rhomb::Rhomb() : 
	Quadrangle(30, 30, 30, 30, 30, 40, 30, 40, RHOMB, 4)
{}

Rhomb::Rhomb(int a, int A, int B) : 
	Quadrangle(a, a, a, a, A, B, A, B, RHOMB, 4)
{}

