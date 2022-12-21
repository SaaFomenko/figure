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
		Figure figure1(2);
	}
	catch (FigureException& err)
	{
		err.createInfo();
	}

  return 0;
}
