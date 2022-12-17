#include "quadrate.h"


const std::string QUADRATE = "Квадрат";

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


