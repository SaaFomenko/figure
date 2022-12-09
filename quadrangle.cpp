#include <iostream>
#include "quadrangle.h"


const std::string QUADRANGLE = "Четырехугольник";
const std::string RIGHT_QUADRANGLE = "Прямоугольник";
const std::string QUADRATE = "Квадрате";
const std::string PARALLELOGRAM = "Параллелограмм";
const std::string RHOMB = "Ромб";


Quadrangle::Quadrangle() : 
	Quadrangle(10, 20, 30, 40, 50, 60, 70, 80, QUADRANGLE, 4)
{}

Quadrangle::Quadrangle(
		int a, 
		int b, 
		int c, 
		int d, 
		int A, 
		int B, 
		int C, 
		int D,
		std::string,
		int sides
		) : 
				Figure(QUADRANGLE, 4)
{
	side_arr = new int[_sides]{a, b, c, d};
	angle_arr = new int[_sides]{A, B, C, D};
}

RightQuadrangle::RightQuadrangle() : 
	Quadrangle(10, 20, 10, 20, 90, 90, 90, 90, RIGHT_QUADRANGLE, 4)
{}

RightQuadrangle::RightQuadrangle(int a, int b) : 
	Quadrangle(a, b, a, b, 90, 90, 90, 90, RIGHT_QUADRANGLE, 4)
{}

Quadrate::Quadrate() : 
	Quadrangle(20, 20, 20, 20, 90, 90, 90, 90, QUADRATE, 4)
{}

Quadrate::Quadrate(int a) : 
	Quadrangle(a, a, a, a, 90, 90, 90, 90, QUADRATE, 4)
{}

Parallelogram::Parallelogram() : 
	Quadrangle(20, 30, 20, 30, 30, 40, 30, 40, PARALLELOGRAM, 4)
{}

Parallelogram::Parallelogram(int a, int b, int A, int B) : 
	Quadrangle(a, b, a, b, A, B, A, B, PARALLELOGRAM, 4)
{}

Rhomb::Rhomb() : 
	Quadrangle(30, 30, 30, 30, 30, 40, 30, 40, RHOMB, 4)
{}

Rhomb::Rhomb(int a, int A, int B) : 
	Quadrangle(a, a, a, a, A, B, A, B, RHOMB, 4)
{}
