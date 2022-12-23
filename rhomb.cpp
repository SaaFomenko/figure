#include <iostream>
#include "rhomb.h"


bool Rhomb::isEqualSides()
{
	return _a == _b && _b == _c && _c == _d;
}

bool Rhomb::isEqualAngles()
{
	return _A == _C && _B == _D;
}

void Rhomb::errCheck(std::string& str)
{
	if (!isEqualSides())
	{
		str += " не был создан. Причина: стороны не равны.";
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

Rhomb::Rhomb(
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
	Quadrangle(a, b, c, d, A, B, C, D, "Ромб", sides)
{
	std::cout << getCreate() << std::endl;
}

Rhomb::Rhomb(int a, int A, int B) : 
	Quadrangle(a, a, a, a, A, B, A, B, "Ромб", 4)
{}

Rhomb::Rhomb() : 
	Quadrangle(30, 30, 30, 30, 30, 40, 30, 40, "Ромб", 4)
{}

Rhomb::~Rhomb(){}
