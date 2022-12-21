#pragma once

#if !defined(TRIANGLE_CLASS)
#define TRIANGLE_CLASS

#include "figure.h"


class Triangle : public Figure
{
	protected:
		int _ideal_sides;
		int _sum_angles;

		int _a;
		int _b;
		int _c;
		int _A;
		int _B;
		int _C;

		virtual bool isAngles();
//		bool isSides() override;

		virtual void errCheck(std::string&);

		Triangle(int, int, int, int, int, int, std::string, int, int);

	public:
		Triangle(int, int, int, int, int, int, int);
		Triangle(int, int, int, int, int, int);
		Triangle();
		virtual ~Triangle();

		std::string getCreate() override;
};

class TriangleException : public FigureException
{
	public:
		TriangleException(std::string);
		virtual ~TriangleException();
};

#endif

