#include <iostream>
#include "figure.h"
#include "triangle.h"
#include "righttriangle.h"
#include "quadrangle.h"


int main() {
	Figure abstract;

	Triangle triangle;

	status check;
	Triangle triangle1;
	check = triangle1.setField(4, figure::sides);
	if (check == status::error)
	{
		std::cout << "Error set sides in triangle1!" << std::endl;

		return status::error;
	}

	Triangle triangle2;
	triangle2.setField(90, figure::C);

	RightTriangle right_triangle;

	RightTriangle right_triangle1;
	right_triangle1.setField(80, figure::C);
	right_triangle1.setField(60, figure::B);
	right_triangle1.setField(40, figure::A);

	Quadrangle quadrangle;

	Quadrangle quadrangle1;
	quadrangle1.setField(3, figure::sides);

	Quadrangle quadrangle2;
	quadrangle2.setField(150, figure::A);

	Quadrangle quadrangle3;
	quadrangle3.setField(50, figure::A);
	quadrangle3.setField(50, figure::B);
	quadrangle3.setField(110, figure::C);
	quadrangle3.setField(150, figure::D);

	Figure* figures[] = {
		&abstract,
		&triangle,
		&triangle1,
		&right_triangle,
		&right_triangle1,
		&quadrangle,
		&quadrangle1,
		&quadrangle2,
		&quadrangle3,
	};
	
	for (Figure* figure : figures)
	{
		std::cout << figure->getStr() << std::endl;
	}

  return status::success;
}
