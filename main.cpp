#include <iostream>
#include "define.h"


int main() {
	Triangle triangle;
	RightTriangle right_triangle;
	IsoscelesTriangle isosceles_triangle;
	IquilateralTriangle iquilateral_triangle;
	Quadrangle quadrangle;
	RightQuadrangle right_quadrangle;
	Quadrate quadrate;
	Parallelogram parallelogram;
	Rhomb rhomb;

	Triangle* figures[] = {
		&triangle,
		&right_triangle,
		&isosceles_triangle,
		&iquilateral_triangle,
		&quadrangle,
		&right_quadrangle,
		&quadrate,
		&parallelogram,
		&rhomb,
	};
	
//	std::cout << figures[0]->lable << std::endl;

	for (Figure* figure : figures)
	{
		std::cout << figure->str << std::endl;
	}

  return 0;
}
