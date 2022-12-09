#include <iostream>
#include "define.h"


static const std::string view::count_sides = "Количество сторон: ";

int main() {
	Figure figure("Фигура", 0);
	Triangle triangle;
	Quadrangle square;

	Figure* figures[] = {
		&figure,
		&triangle,
		&square,
	};
	
	std::cout << view::count_sides << std::endl;

	for (Figure* figure : figures)
	{
		std::cout << figure->getName() << ": " <<
		 figure->getSides() <<	std::endl;
	}

  return 0;
}
