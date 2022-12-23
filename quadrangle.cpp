#include <iostream>
#include "quadrangle.h"
#include "figure.h"


bool Quadrangle::isAngles()
{
	int sum_angles = _A + _B + _C + _D;

	bool check = _sum_angles == sum_angles;

	return check;
}

void Quadrangle::errCheck(std::string& str)
{
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

std::string Quadrangle::getCreate()
{
	std::string str = _name + " (стороны " + std::to_string(_a) +
		", " + std::to_string(_b) + ", " + std::to_string(_c) + ", " + 
		std::to_string(_d) + "; углы " + std::to_string(_A) + ", " + 
		std::to_string(_B) + ", " + std::to_string(_C) + ", " + 
		std::to_string(_D) + ")";

	errCheck(str);

	return str + " создан.";
}

Quadrangle::Quadrangle(
		int a, 
		int b, 
		int c, 
		int d, 
		int A, 
		int B, 
		int C, 
		int D,
		std::string name,
		int sides
		) : 
				_a(a),
				_b(b),
				_c(c),
				_d(d),
				_A(A),
				_B(B),
				_C(C),
				_D(D),
				_sum_angles(360),
				Figure(name, sides, 4)
{}

Quadrangle::Quadrangle(
		int a, 
		int b, 
		int c, 
		int d, 
		int A, 
		int B, 
		int C, 
		int D,
		int sides
		) : Quadrangle(a, b, c, d, A, B, C, D, "Четырехугольник", sides)
{
	std::cout << getCreate() << std::endl;
}

Quadrangle::Quadrangle() : 
	Quadrangle(10, 20, 30, 40, 50, 60, 70, 80, "Четырехугольник", 4)
{}

Quadrangle::~Quadrangle(){}

