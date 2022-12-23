#include <iostream>
#include "parallelogram.h"
#include "figure.h"


bool Parallelogram::isEqualAngles()
{
	return _A == _C && _B == _D;
}

bool Parallelogram::isEqualSides()
{
	return _a == _c && _b == _d;
}

void Parallelogram::errCheck(std::string& str)
{
	if (!isEqualSides())
	{
		str += " не был создан. Причина: стороны a,c и b,d попарно не равны.";
		throw FigureException(str);
	}

	if (!isEqualAngles())
	{
		str += " не был создан. Причина: углы A,C и B,D попарно не равны.";
		throw FigureException(str);
	}

	if (!isSides())
	{
		str += " не был создан. Причина: количество сторон не равно " +
			std::to_string(_ideal_sides) + ".";
		throw FigureException(str);
	}

	if(!isAngles())
	{
		str += " не был создан. Причина: сумма углов не равна " +
			std::to_string(_sum_angles) + ".";
		throw FigureException(str);
	}
}

Parallelogram::Parallelogram(
		int a, 
		int b,
	  int c,
		int d,	
		int A, 
		int B,
		int C,
		int D,
		int sides
		) : 
	Quadrangle(a, b, c, d, A, B, C, D, "Параллелограмм", sides)
{
	std::cout << getCreate() << std::endl;
}

Parallelogram::Parallelogram(int a, int b, int A, int B) : 
	Quadrangle(a, b, a, b, A, B, A, B, "Параллелограмм", 4)
{}

Parallelogram::Parallelogram() : 
	Quadrangle(20, 30, 20, 30, 30, 40, 30, 40, "Параллелограмм", 4)
{}

Parallelogram::~Parallelogram(){}
