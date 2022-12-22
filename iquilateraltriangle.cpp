#include <iostream>
#include "iquilateraltriangle.h"


IquilateralTriangleException::IquilateralTriangleException(std::string str) : 
	FigureException(str)
{}

IquilateralTriangleException::~IquilateralTriangleException(){}

bool IquilateralTriangle::isEqualSides()
{
	bool check = _a == _b && _b == _c;

	return check;
}

bool IquilateralTriangle::isEqualAngles()
{
	int angle = _sum_angles / _ideal_sides;

	bool check = _A == angle && _B == angle && _C == angle;

	return check;
}

void IquilateralTriangle::errCheck(std::string& str)
{
	if (!isEqualSides())
	{
		str += " не был создан. Причина: стороны не равны.";
		throw IquilateralTriangleException(str);
	}

	if (!isEqualAngles())
	{
		std::string angle_str = std::to_string(_sum_angles / _ideal_sides);
		str += " не был создан. Причина: уголы не равны " + angle_str + ".";
		throw IquilateralTriangleException(str);
	}

	if (!isSides())
	{
		str += " не был создан. Причина: количество сторон не равно " +
			std::to_string(_ideal_sides) + ".";
		throw IquilateralTriangleException(str);
	}

	if(!isAngles())
	{
		str += " не был создан. Причина: сумма углов не равна " +
			std::to_string(_sum_angles) + ".";
		throw IquilateralTriangleException(str);
	}

}

IquilateralTriangle::IquilateralTriangle(
		int a, 
		int b, 
		int c,
		int A,
		int B,
		int C,
		int sides
		) : Triangle(a, b, c, A, B, C, "Равносторонний треугольник", sides, 3)
{
	std::cout << getCreate() << std::endl;
}

IquilateralTriangle::IquilateralTriangle(int a) : 
	Triangle(a, a, a, 60, 60, 60, "Равносторонний треугольник", 3, 3)
{}

IquilateralTriangle::IquilateralTriangle() : 
	Triangle(30, 30, 30, 60, 60, 60, "Равносторонний треугольник", 3, 3)
{}

IquilateralTriangle::~IquilateralTriangle(){}
