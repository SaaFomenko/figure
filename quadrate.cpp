#include <iostream>
#include "quadrate.h"
#include "figure.h"


bool Quadrate::isEqualSides()
{
	return _a == _b && _b == _c && _c == _d;
}

bool Quadrate::isEqualAngles()
{
	int angle = _sum_angles / _ideal_sides;
	bool check = _A == angle && _A == _B && _B == _C && _C == _D;

	return check;
}

void Quadrate::errCheck(std::string& str)
{
	if (!isEqualSides())
	{
		str += " не был создан. Причина: стороны не равны.";
		throw FigureException(str);
	}

	if (!isEqualAngles())
	{
		std::string angle_str = std::to_string(_sum_angles / _ideal_sides);
		str += " не был создан. Причина: углы не равны " + angle_str + ".";
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

Quadrate::Quadrate(
		int a,
		int b,
		int c,
		int d,
		int A,
		int B,
		int C,
		int D,
		int sides
		) : Quadrangle(a, b, c, d, A, B, C, D, "Квадрат", sides)
{
	std::cout << getCreate() << std::endl;
}

Quadrate::Quadrate(int a) : 
	Quadrangle(a, a, a, a, 90, 90, 90, 90, "Квадрат", 4)
{}

Quadrate::Quadrate() : 
	Quadrangle(20, 20, 20, 20, 90, 90, 90, 90, "Квадрат", 4)
{}

Quadrate::~Quadrate(){}
