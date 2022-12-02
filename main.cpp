#include <iostream>
#include "define.h"


int main() {
//	Figure figure;
	Triangle triangle;
	Quadrangle square;

//	Figure* figures[] = {
	Triangle* figures[] = {
//		&figure,
		&triangle,
		&square,
	};
	
//	std::cout << figures[0]->lable << std::endl;

	for (Figure* figure : figures)
	{
		std::cout << figure->str << std::endl;
	}

  return 0;
}
