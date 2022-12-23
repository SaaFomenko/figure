#include <iostream>
#include "rightquadrangle.h"
#include "figure.h"


bool RightQuadrangle::isEqualSides()
{
	return _a == _c && _b == _d;
}

bool RightQuadrangle::isEqualAngles()
{
	int angle = _sum_angles / _ideal_sides;
	bool check = _A == angle && _A == _B && _B == _C &&	_C == _D;

	return check;
}

void RightQuadrangle::errCheck(std::string& str)
{
	if (!isEqualSides())
	{
		str += " не был создан. Причина: стороны a,c и b,d попарно не равны.";
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

RightQuadrangle::RightQuadrangle(
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
	Quadrangle(a, b, c, d, A, B, C, D, "Прямоугольник", sides)
{
	std::cout << getCreate() << std::endl;
}

RightQuadrangle::RightQuadrangle(int a, int b) : 
	Quadrangle(a, b, a, b, 90, 90, 90, 90, "Прямоугольник", 4)
{}

RightQuadrangle::RightQuadrangle() : 
	Quadrangle(10, 20, 10, 20, 90, 90, 90, 90, "Прямоугольник", 4)
{}

RightQuadrangle::~RightQuadrangle(){}
