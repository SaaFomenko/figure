#include <iostream>
#include <string>
#include "define.h"


const std::string lable::sides = "Стороны:";
const std::string lable::a = " a=";
const std::string lable::b = " b=";
const std::string lable::c = " c=";
const std::string lable::d = " d=";

const std::string lable::angles = "Углы:";
const std::string lable::A = " A=";
const std::string lable::B = " B=";
const std::string lable::C = " C=";
const std::string lable::D = " D=";

void Figure::getStr(
		int* side,
		int* angle,
		const int sides,
		const std::string name
		)
{
	const std::string lable_side[] = {
		lable::a,
		lable::b,
		lable::c,
		lable::d,
	};
	const std::string lable_angle[] = {
		lable::A,
		lable::B,
		lable::C,
		lable::D,
	};
	std::string s = "";
	str = name + ":\n";
	str += lable::sides;
	for (int i = 0; i < sides; ++i)
	{
		s = std::to_string(side[i]);
		str += lable_side[i] + s;
	}	
	str += "\n";
	str += lable::angles;
	for (int i = 0; i < sides; ++i)
	{
		s = std::to_string(angle[i]);
		str += lable_angle[i] + s;
	}	
	str += "\n";
}

Triangle::Triangle()
{
	int side[sides] = {a, b, c};
	int angle[sides] = {A, B, C};
	getStr(side, angle, sides, name);
}

RightTriangle::RightTriangle()
{
	int side[sides] = {a, b, c};
	int angle[sides] = {A, B, C};
	getStr(side, angle, sides, name);
}

IsoscelesTriangle::IsoscelesTriangle()
{
	int side[sides] = {a, b, c};
	int angle[sides] = {A, B, C};
	getStr(side, angle, sides, name);
}

IquilateralTriangle::IquilateralTriangle()
{
	int side[sides] = {a, b, c};
	int angle[sides] = {A, B, C};
	getStr(side, angle, sides, name);
}

Quadrangle::Quadrangle()
{
	int side[sides] = {a, b, c, d};
	int angle[sides] = {A, B, C, D};
	getStr(side, angle, sides, name);
}

RightQuadrangle::RightQuadrangle()
{
	int side[sides] = {a, b, c, d};
	int angle[sides] = {A, B, C, D};
	getStr(side, angle, sides, name);
}

Quadrate::Quadrate()
{
	int side[sides] = {a, b, c, d};
	int angle[sides] = {A, B, C, D};
	getStr(side, angle, sides, name);
}

Parallelogram::Parallelogram()
{
	int side[sides] = {a, b, c, d};
	int angle[sides] = {A, B, C, D};
	getStr(side, angle, sides, name);
}

Rhomb::Rhomb()
{
	int side[sides] = {a, b, c, d};
	int angle[sides] = {A, B, C, D};
	getStr(side, angle, sides, name);
}

