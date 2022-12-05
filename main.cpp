#include <iostream>
#include "define.h"


int main() {
	Figure abstract;
	Triangle triangle;
	Triangle triangle1(10, 20, 30, 50, 60, 90, 3);
	Triangle triangle2(10, 20, 30, 50, 60, 70, 4);
	RightTriangle right_triangle;
	RightTriangle right_triangle1(10, 30, 20, 50, 50, 80, 3);
	Quadrangle quadrangle;
	Quadrangle quadrangle1(10, 30, 20, 40, 50, 60, 120, 130, 3);
	Quadrangle quadrangle2(10, 30, 20, 40, 50, 60, 110, 130, 4);

	Figure* figures[] = {
		&abstract,
		&triangle,
		&triangle1,
		&right_triangle,
		&right_triangle1,
		&quadrangle,
		&quadrangle1,
		&quadrangle2,
	};
	
//	std::cout << figures[0]->lable << std::endl;

	for (Figure* figure : figures)
	{
		std::cout << figure->getStr() << std::endl;
	}

  return 0;
}
