#include <iostream>
#include "triangle.h"


Triangle::Triangle(
		int sides,
		int a,
		int b,
		int c,
		int A,
		int B,
		int C
		) : _sides(sides),
				_a(a),
				_b(b),
				_c(c),
				_A(A),
				_B(B),
				_C(C)
{}

const std::string Triangle::getStr()
{
	int side[] = {_a, _b, _c};
	int angle[] = {_A, _B, _C};
	std::string s = std::to_string(_sides);
	std::string str = name + ":\n" + 
		(checking() ? lable::correct : lable::wrong) + "\n";
	str += lable::count_sides + s + "\n";

	templFigure(side, angle, ideal_sides, &str);

	return str;
}

bool Triangle::checking()
{
	bool check = true;
	int sum_angles = _A + _B + _C;
	bool sides_fail = _sides != ideal_sides;
	bool angles_fail = sum_angles != total_angles;

	if (angles_fail || sides_fail)
	{
		check = false;
	}

	return check;
}

status Triangle::setField(int val, figure field)
{
	bool check = field != figure::d && field >= figure::sides 
																	&& field <= figure::C;

	if (check)
	{
// segmetation error
//		int* fields[] = {&_sides, &_a, &_b, &_c, &_A, &_B, &_C};
//		int* fields[] = {_sides, _a, _b, _c, _A, _B, _C};
		int fields[] = {_sides, _a, _b, _c, _A, _B, _C};

//		*fields[field] = val;
		fields[field] = val; //не меняет переменную класса
/*
		std::cout << "fields["<< field << "] = " << fields[field] << std::endl;
		std::cout << "_sides = " << _sides << std::endl;
*/
		return status::success;
	}

	return status::error;
}
