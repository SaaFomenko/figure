#include <string>
#include "define.h"


const std::string lable::sides = "Стороны: ";
const std::string lable::a = " a=";
const std::string lable::b = " b=";
const std::string lable::c = " c=";
const std::string lable::d = " d=";

const std::string lable::angles = "Углы: ";
const std::string lable::A = " A=";
const std::string lable::B = " B=";
const std::string lable::C = " C=";
const std::string lable::D = " D=";

void Figure::getStr(
		const int* side,
		const int* angle,
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
}

/*Figure::Figure()
{
	getStr(side, angle, sides);
}
*/

Triangle::Triangle()
{
	int side[sides];
	int angle[sides];
	side[side::a] = 10;
	side[side::b] = 20;
	side[side::c] = 30;
	angle[angle::A] = 50;
	angle[angle::B] = 60;
	angle[angle::C] = 70;
	getStr(side, angle, sides, name);
}

Quadrangle::Quadrangle()
{
	int side[sides];
	int angle[sides];
	side[side::a] = 10;
	side[side::b] = 20;
	side[side::c] = 30;
	side[side::d] = 40;
	angle[angle::A] = 50;
	angle[angle::B] = 60;
	angle[angle::C] = 70;
	angle[angle::D] = 80;

	getStr(side, angle, sides, name);
}
