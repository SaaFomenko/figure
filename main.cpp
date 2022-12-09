#include <iostream>
#include "figure.h"
#include "view.h"


const std::string view::sides = "Стороны:";
const std::string view::a = " a=";
const std::string view::b = " b=";
const std::string view::c = " c=";
const std::string view::d = " d=";

const std::string view::angles = "Углы:";
const std::string view::A = " A=";
const std::string view::B = " B=";
const std::string view::C = " C=";
const std::string view::D = " D=";

int main() {

	const std::string side_lable[] = {
		view::a,
		view::b,
		view::c,
		view::d,
	};

	const std::string angle_lable[] = {
		view::A,
		view::B,
		view::C,
		view::D,
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
		std::cout << view::sides;
		for (int i = 0; i < size; ++i)
		{
			std::cout << side_lable[i] << side[i];
		}
		std::cout << std::endl;
		std::cout << view::angles;
		for (int i = 0; i < size; ++i)
		{
			std::cout << angle_lable[i] << angle[i];
		}
		std::cout << std::endl;
		std::cout << std::endl;
	}

  return 0;
}
