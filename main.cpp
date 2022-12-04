#include <iostream>
#include "define.h"


int main() {
	Figure abstract;
	Triangle triangle;
	RightTriangle right_triangle;
	Quadrangle quadrangle;

	Figure* figures[] = {
		&abstract,
		&triangle,
		&right_triangle,
		&quadrangle,
	};
	
//	std::cout << figures[0]->lable << std::endl;

	for (Figure* figure : figures)
	{
		std::cout << figure->getStr() << std::endl;
	}

  return 0;
}
