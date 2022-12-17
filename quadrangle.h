#pragma once

#if !defined(QUADRANGLE_CLASS)
#define QUADRANGLE_CLASS

#include "figure.h"


class Quadrangle : public Figure
{
	protected:
		int ideal_sides;
		int _sum_angles;

		int _a;
		int _b;
		int _c;
		int _d;
		int _A;
		int _B;
		int _C;
		int _D;

		bool checking() override;
		bool isSum();

		Quadrangle(
				int, int, int, int, int, int, int, int, std::string, int
				);

	public:
		Quadrangle();
		virtual ~Quadrangle();

		void getInfo() override;
};

#endif
