#include <iostream>
#include "define.h"


const std::string Figure::lable = "Количество сторон: ";

int main() {
	Figure figure("Фигура", 0);
	Triangle triangle;
	Quadrangle square;

	Figure* figures[] = {
		&figure,
		&triangle,
		&square,
	};
	
	std::cout << figures[0]->lable << std::endl;

	for (Figure* figure : figures)
	{
		std::cout << figure->getName() << ": " <<
		 figure->getSides() <<	std::endl;
	}

  return 0;
}
