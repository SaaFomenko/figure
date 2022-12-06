#include "quadrangle.h"


Quadrangle::Quadrangle(
		int sides,
    int d,
    int B,
    int D
		) : _sides{sides},
				_d{d},
				_B{B},
				_D{D}
{}

const std::string Quadrangle::getStr()
{
	int side[] = {_a, _b, _c, _d};
	int angle[] = {_A, _B, _C, _D};
	std::string s = std::to_string(_sides);
	std::string str = name + ":\n" + 
		(checking() ? lable::correct : lable::wrong) + "\n";

	str += lable::count_sides + s + "\n";

	templFigure(side, angle, ideal_sides, &str);

	return str;
}

bool Quadrangle::checking()
{
	bool check = true;
	int sum_angles = _A + _B + _C + _D;
	bool sides_fail = _sides != ideal_sides;
	bool angles_fail = sum_angles != total_angles;

//	std::cout << "Check: " << check << std::endl;
	if (angles_fail || sides_fail)
	{
		check = false;
	}
/*	std::cout << "Check: " << check << std::endl;

	std::cout << class_name << std::endl;
	std::cout << "Sides: " << sides << std::endl;
	std::cout << "Ideal sides: " << ideal_sides << std::endl;
	std::cout << "Sides fail: " << sides_fail << std::endl;
	std::cout << std::endl;
*/
	
	return check;
}

status Quadrangle::setField(int val, figure field)
{
	if (field >= figure::sides && field <= figure::D)
	{
		int fields[] = {_sides, _a, _b, _c, _d, _A, _B, _C, _D};

		fields[field] = val;

		return status::success;
	}

	return status::error;
}
