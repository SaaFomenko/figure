#include "figure.h"


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


Figure::Figure(int sides) : _sides(sides) {}

const std::string Figure::getStr()
{
	std::string s = std::to_string(_sides);
	std::string str = name + ":\n" + 
		(checking() ? lable::correct : lable::wrong);

	return str + "\n" + lable::count_sides + s + "\n";
}

bool Figure::checking()
{
	bool check = true;
	if (_sides != ideal_sides)
	{
		check = false;
	}

	return check;
}

status Figure::setField(int val, figure field)
{
	if (field == figure::sides)
	{
		_sides = val;

		return status::success;
	}

	return status::error;
}
