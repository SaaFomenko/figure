#include "rightquadrangle.h"

const std::string RIGHT_QUADRANGLE = "Прямоугольник";

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


