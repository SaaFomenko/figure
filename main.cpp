#include <iostream>
#include "figure.h"
#include "triangle.h"
#include "righttriangle.h"
#include "isoscelestriangle.h"
#include "iquilateraltriangle.h"
#include "quadrangle.h"
#include "rightquadrangle.h"
#include "quadrate.h"
/*
#include "parallelogram.h"
#include "rhomb.h"
*/


int main() 
{
//	std::string triangle_name = "Треугольник";

	try
	{
		Figure figure(0);
		IquilateralTriangle triangle(20, 20, 20, 60, 60, 60, 3);
		Quadrangle quadrangle(10, 20, 30, 40, 60, 70, 80, 150, 4);
		Quadrangle quadrangle1(10, 20, 30, 40, 70, 100, 80, 110, 4);
		RightQuadrangle rightquadrangle(10, 20, 10, 20, 90, 90, 90, 90, 4);
		RightQuadrangle rightquadrangle1(30, 20, 30, 20, 90, 90, 90, 90, 4);
		Quadrate quadrate(20, 20, 20, 20, 90, 90, 90, 90, 4);
		Quadrate quadrate1(10, 20, 30, 40, 70, 100, 80, 110, 4);
	}
	catch (QuadrateException& err)
	{
		std::cout << err.what() << std::endl;
	}
	catch (RightQuadrangleException& err)
	{
		std::cout << err.what() << std::endl;
	}
	catch (QuadrangleException& err)
	{
		std::cout << err.what() << std::endl;
	}
	catch (IquilateralTriangleException& err)
	{
		std::cout << err.what() << std::endl;
	}
	catch (IsoscelesTriangleException& err)
	{
		std::cout << err.what() << std::endl;
	}
	catch (RightTriangleException& err)
	{
		std::cout << err.what() << std::endl;
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
