#include "righttriangle.h"


RightTriangle::RightTriangle(
		int A,
		int C
		) : _A(A),
				_C{C}
{}

const std::string RightTriangle::getStr()
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

bool RightTriangle::checking()
{
	bool check = true;
	int sum_angles = _A + _B + _C;
	bool C_fail = _C != ideal_C;
	bool sides_fail = _sides != ideal_sides;
	bool angles_fail = sum_angles != total_angles;

	if (angles_fail || sides_fail || C_fail)
	{
		check = false;
	}

	return check;
}

