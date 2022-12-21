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

		bool checking() override;
		bool isSum();

		Triangle(int, int, int, int, int, int, std::string, int);

	public:
		Triangle(int, int, int, int, int, int);
		Triangle();
		virtual ~Triangle();

		void getInfo() override;
};

class TriangleException : std::exception
{
	std::string _err;

	public:
		TriangleException(std::string);

		const char* what() const noexcept override;
};

#endif

