#include <iostream>
#include "righttriangle.h"
#include "figure.h"


bool RightTriangle::isRightAngle()
{
	return _C == _sum_angles/2;
}

void RightTriangle::errCheck(std::string& str)
{
	if (!isRightAngle())
	{
		std::string str_C = std::to_string(_sum_angles/2);
		str += " не был создан. Причина: угол С неравен " + str_C + ".";
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

RightTriangle::RightTriangle(
		int a, 
		int b, 
		int c, 
		int A, 
		int B, 
		int C, 
		int sides
		) :	Triangle(a, b, c, A, B, C, "Прямоугольный треугольник", sides, 3)
{
	std::cout << getCreate() << std::endl;
}

RightTriangle::RightTriangle(int a, int b, int c, int A, int B) : 
	Triangle(a, b, c, A, B, 90, "Прямоугольный треугольник", 3, 3)
{}

RightTriangle::RightTriangle() : 
	Triangle(10, 20, 30, 50, 60, 90, "Прямоугольный треугольник", 3, 3)
{}

RightTriangle::~RightTriangle(){}
