#include <iostream>
#include "figure.h"


const std::string Figure::sides = "Стороны:";
const std::string Figure::a = " a=";
const std::string Figure::b = " b=";
const std::string Figure::c = " c=";
const std::string Figure::d = " d=";

const std::string Figure::angles = "Углы:";
const std::string Figure::A = " A=";
const std::string Figure::B = " B=";
const std::string Figure::C = " C=";
const std::string Figure::D = " D=";

int main() {

	const std::string side_lable[] = {
		Figure::a,
		Figure::b,
		Figure::c,
		Figure::d,
	};

	const std::string angle_lable[] = {
		Figure::A,
		Figure::B,
		Figure::C,
		Figure::D,
	};

	Triangle triangle;
	RightTriangle right_triangle;
	RightTriangle right_triangle1(11, 12, 13, 30, 60);
	IsoscelesTriangle isosceles_triangle;
	IsoscelesTriangle isosceles_triangle1(35, 40, 50, 80);
	IquilateralTriangle iquilateral_triangle;
	IquilateralTriangle iquilateral_triangle1(60);
	Quadrangle quadrangle;
	RightQuadrangle right_quadrangle;
	Quadrate quadrate;
	Parallelogram parallelogram;
	Rhomb rhomb;
	Rhomb rhomb1(7, 120, 60);

	Figure* figures[] = {
		&triangle,
		&right_triangle,
		&right_triangle1,
		&isosceles_triangle,
		&isosceles_triangle1,
		&iquilateral_triangle,
		&iquilateral_triangle1,
		&quadrangle,
		&right_quadrangle,
		&quadrate,
		&parallelogram,
		&rhomb,
		&rhomb1,
	};
	
	for (Figure* figure : figures)
	{
		int size = figure->getCountSides();
		int* side = figure->getSides();
		int* angle = figure->getAngles();

		std::cout << figure->getName() << ":" << std::endl;
		std::cout << Figure::sides;
		for (int i = 0; i < size; ++i)
		{
			std::cout << side_lable[i] << side[i];
		}
		std::cout << std::endl;
		std::cout << Figure::angles;
		for (int i = 0; i < size; ++i)
		{
			std::cout << angle_lable[i] << angle[i];
		}
		std::cout << std::endl;
		std::cout << std::endl;
	}

  return 0;
}
