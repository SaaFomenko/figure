#include "parallelogram.h"


const std::string PARALLELOGRAM = "Параллелограмм";

bool Parallelogram::checking()
{
	bool check = _A == _C && _B == _D && _a == _c && _b == _d;

	return isSum() && check;
}

Parallelogram::Parallelogram() : 
	Quadrangle(20, 30, 20, 30, 30, 40, 30, 40, PARALLELOGRAM, 4)
{}

Parallelogram::Parallelogram(int a, int b, int A, int B) : 
	Quadrangle(a, b, a, b, A, B, A, B, PARALLELOGRAM, 4)
{}

Parallelogram::~Parallelogram(){}


