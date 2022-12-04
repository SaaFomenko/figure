#include <iostream>
#include <string>
#include "define.h"


const std::string lable::correct = "Правильная";
const std::string lable::wrong = "Неправильная";
const std::string lable::count_sides = "Количество сторон: ";
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

void templFigure(
		int* side, 
		int* angle, 
		int sides,
		std::string* str
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
	std::string s = std::to_string(sides);

	*str += lable::count_sides + s + "\n";
	*str += lable::sides;
	for (int i = 0; i < sides; ++i)
	{
		s = std::to_string(side[i]);
		*str += lable_side[i] + s;
	}	
	*str += "\n";
	*str += lable::angles;
	for (int i = 0; i < sides; ++i)
	{
		s = std::to_string(angle[i]);
		*str += lable_angle[i] + s;
	}	
	*str += "\n";
}

const std::string Triangle::getStr()
{
	int side[] = {a, b, c};
	int angle[] = {A, B, C};
	std::string str = "";

	str = name + ":\n";
	templFigure(side, angle, sides, &str);

	return str;
}

const std::string Figure::getStr()
{
	std::string s = std::to_string(sides);
	std::string str = name + ":\n" + 
		(check ? lable::correct : lable::wrong);

	return str + "\n" + lable::count_sides + s + "\n";
}

void Figure::checking()
{
	if (sides != ideal_sides)
	{
		check = false;
	}
}

Figure::Figure(){}

Figure::Figure(int sides) : sides{sides}
{
	checking();
}

Triangle::Triangle(){}
Triangle::Triangle(
		int a,
		int b,
		int c,
		int A,
		int B,
		int C,
		int sides
		) : a{a},
				b{b},
				c{c},
				A{A},
				B{B},
				C{C},
				sides{sides}{}

RightTriangle::RightTriangle(){}
RightTriangle::RightTriangle(
		int a,
		int b,
		int c,
		int A,
		int B,
		int C,
		int sides
		) : Triangle(a, b, c, A, B, C, sides){}

const std::string RightTriangle::getStr()
{
	int side[] = {a, b, c};
	int angle[] = {A, B, C};
	std::string str = "";

	str = name + ":\n";
	templFigure(side, angle, sides, &str);

	return str;
}

Quadrangle::Quadrangle(){}
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
		) : d{d},
				D{D},
				Triangle(a, b, c, A, B, C, sides){}

const std::string Quadrangle::getStr()
{
	int side[] = {a, b, c, d};
	int angle[] = {A, B, C, D};
	std::string str = "";

	str = name + ":\n";
	templFigure(side, angle, sides, &str);

	return str;
}
