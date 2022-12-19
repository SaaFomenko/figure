#pragma once

#if !defined(PARALLELOGRAM_CLASS)
#define PARALLELOGRAM_CLASS

#include "quadrangle.h"


class Parallelogram : public Quadrangle
{
	protected:
		bool checking() override;

	public:
		Parallelogram();
		Parallelogram(int, int, int, int);
		virtual ~Parallelogram();
};

#endif
