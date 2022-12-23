#include <iostream>
#include "triangle.h"
#include "figure.h"


bool Triangle::isAngles()
{
	int sum_angles = _A + _B + _C;

	bool check = _sum_angles == sum_angles;

	return check;
}

void Triangle::errCheck(std::string& str)
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

std::string Triangle::getCreate()
{
	std::string str = _name + " (стороны " + std::to_string(_a) +
		", " + std::to_string(_b) + ", " + std::to_string(_c) + "; углы " +
		std::to_string(_A) + ", " + std::to_string(_B) + ", " +
		std::to_string(_C) + ")";

	errCheck(str);

	return str + " создан.";
}

Triangle::Triangle(
		int a, 
		int b, 
		int c, 
		int A, 
		int B, 
		int C,
		std::string name,
		int sides,
		int ideal_sides
	 	) :
				_a(a),
				_b(b),
				_c(c),
				_A(A),
				_B(B),
				_C(C),
				_sum_angles(180),
				Figure(name, sides, ideal_sides)
{}

Triangle::Triangle(
		int a, 
		int b, 
		int c,
		int A,
		int B,
		int C,
		int sides
		) : 
				Triangle(a, b, c, A, B, C, "Треугольник", sides, 3)
{
	std::cout << getCreate() << std::endl;
}

Triangle::Triangle(int a, int b, int c, int A, int B, int C) : 
	Triangle(a, b, c, A, B, C, "Треугольник", 3, 3)
{}

Triangle::Triangle() : 
	Triangle(10, 20, 30, 50, 60, 70, "Треугольник", 3, 3)
{}

Triangle::~Triangle(){}
