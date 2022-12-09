#include <iostream>
#include "triangle.h"


const std::string TRIANGLE = "Треугольник";
const std::string RIGHT_TRIANGLE = "Прямоугольный треугольник";
const std::string ISOSCELES_TRIANGLE = "Равнобедренный треугольник";
const std::string IQUILATERAL_TRIANGLE = "Равнобедренный треугольник";

bool Triangle::checking()
{
	return check;
}

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
