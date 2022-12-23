#pragma once

#if !defined(PARALLELOGRAM_CLASS)
#define PARALLELOGRAM_CLASS

#include "quadrangle.h"


class Parallelogram : public Quadrangle
{
	protected:
		bool isEqualSides();
		bool isEqualAngles();

		void errCheck(std::string&) override;

	public:
		Parallelogram(int, int, int, int, int, int, int, int, int);
		Parallelogram(int, int, int, int);
		Parallelogram();
		virtual ~Parallelogram();
};

#endif
