#include <iostream>
#include "triangle.h"


const std::string TRIANGLE = "Треугольник";
const std::string RIGHT_TRIANGLE = "Прямоугольный треугольник";
const std::string ISOSCELES_TRIANGLE = "Равнобедренный треугольник";
const std::string IQUILATERAL_TRIANGLE = "Равнобедренный треугольник";


Triangle::Triangle() : Figure(10, 20, 30, 50, 60, 70, TRIANGLE, 3)
{}

Triangle::Triangle(int a, int b, int c, int A, int B, int C) : 
	Figure(a, b, c, A, B, C, TRIANGLE, 3)
{}

RightTriangle::RightTriangle() : 
	Figure(10, 20, 30, 50, 60, 90, RIGHT_TRIANGLE, 3)
{}

RightTriangle::RightTriangle(int a, int b, int c, int A, int B) : 
	Figure(a, b, c, A, B, 90, RIGHT_TRIANGLE, 3)
{}

IsoscelesTriangle::IsoscelesTriangle() : 
	Figure(10, 20, 10, 50, 60, 50, ISOSCELES_TRIANGLE, 3)
{}

IsoscelesTriangle::IsoscelesTriangle(int a, int b, int A, int B) : 
	Figure(a, b, a, A, B, A, ISOSCELES_TRIANGLE, 3)
{}

IquilateralTriangle::IquilateralTriangle() : 
	Figure(30, 30, 30, 60, 60, 60, IQUILATERAL_TRIANGLE, 3)
{}

IquilateralTriangle::IquilateralTriangle(int a) : 
	Figure(a, a, a, 60, 60, 60, IQUILATERAL_TRIANGLE, 3)
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
