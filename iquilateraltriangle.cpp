#include "iquilateraltriangle.h"


const std::string IQUILATERAL_TRIANGLE = "Равносторонний треугольник";

bool IquilateralTriangle::checking()
{
	int angle = _sum_angles / _ideal_sides;
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
