#include "rhomb.h"


const std::string RHOMB = "Ромб";

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
