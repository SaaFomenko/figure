#include "righttriangle.h"


const std::string RIGHT_TRIANGLE = "Прямоугольный треугольник";

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
