#include "figure.h"


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
	std::string s = "";

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
