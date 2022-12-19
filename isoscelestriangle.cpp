#include "isoscelestriangle.h"


const std::string ISOSCELES_TRIANGLE = "Равнобедренный треугольник";

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


