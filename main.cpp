#include <iostream>
#include "figure.h"
#include "triangle.h"
/*
#include "righttriangle.h"
#include "isoscelestriangle.h"
#include "iquilateraltriangle.h"
#include "quadrangle.h"
#include "rightquadrangle.h"
#include "quadrate.h"
#include "parallelogram.h"
#include "rhomb.h"
*/


int main() 
{
//	std::string triangle_name = "Треугольник";

	try
	{
		Figure figure(0);
		Triangle triangle(10, 20, 30, 50, 60, 70, 3);
		Triangle triangle1(10, 20, 30, 50, 60, 80, 3);
	}
	catch (TriangleException& err)
	{
		std::cout << err.what() << std::endl;
	}
	catch (FigureException& err)
	{
		std::cout << err.what() << std::endl;
	}

  return 0;
}
