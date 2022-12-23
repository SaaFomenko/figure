#include <iostream>
#include "isoscelestriangle.h"
#include "figure.h"


bool IsoscelesTriangle::isIsoscelesSide()
{
	return  _a == _c;
}

bool IsoscelesTriangle::isIsoscelesAngle()
{
	return  _A == _C;
}

void IsoscelesTriangle::errCheck(std::string& str)
{
	if (!isIsoscelesSide())
	{
		str += " не был создан. Причина: сторона \"a\" не равна \"c\".";
		throw FigureException(str);
	}

	if (!isIsoscelesAngle())
	{
		str += " не был создан. Причина: угол A не равен C.";
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

IsoscelesTriangle::IsoscelesTriangle(
		int a, 
		int b, 
		int c, 
		int A,
		int B,
		int C,
		int sides
		) :	Triangle(a, b, c, A, B, C, "Равнобедренный треугольник", sides, 3)
{
	std::cout << getCreate() << std::endl;
}

IsoscelesTriangle::IsoscelesTriangle(int a, int b, int A, int B) : 
	Triangle(a, b, a, A, B, A, "Равнобедренный треугольник", 3, 3)
{}

IsoscelesTriangle::IsoscelesTriangle() : 
	Triangle(10, 20, 10, 50, 60, 50, "Равнобедренный треугольник", 3, 3)
{}

IsoscelesTriangle::~IsoscelesTriangle(){}
