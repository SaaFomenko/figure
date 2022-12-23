#include <iostream>
#include "figure.h"
#include "triangle.h"
#include "righttriangle.h"
#include "isoscelestriangle.h"
#include "iquilateraltriangle.h"
#include "quadrangle.h"
#include "rightquadrangle.h"
#include "quadrate.h"
#include "parallelogram.h"
#include "rhomb.h"


int main() 
{

	try
	{
		Figure figure(0);
		Triangle triangle(10, 20, 30, 50, 60, 70, 3);
		RightTriangle righttriangle(10, 20, 30, 30, 60, 90, 3);
		IsoscelesTriangle isoscelestriangle(20, 30, 20, 30, 120, 30, 3);
		IquilateralTriangle iquilateraltriangle(20, 20, 20, 60, 60, 60, 3);
		Quadrangle quadrangle(10, 20, 30, 40, 60, 70, 80, 150, 4);
		RightQuadrangle rightquadrangle(10, 20, 10, 20, 90, 90, 90, 90, 4);
		Quadrate quadrate(20, 20, 20, 20, 90, 90, 90, 90, 4);
		Parallelogram parallelogram(30, 20, 30, 20, 45, 135, 45, 135, 4);
		Rhomb rhomb(30, 30, 30, 30, 45, 135, 45, 135, 4);
		Rhomb rhomb1(30, 30, 30, 30, 45, 135, 45, 145, 4);
	}
	catch (FigureException& err)
	{
		std::cout << err.what() << std::endl;
	}

  return 0;
}
