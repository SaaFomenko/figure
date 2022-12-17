#pragma once

#if !defined(RHOMB_CLASS)
#define QUADRATE_CLASS

#include "quadrangle.h"


class Rhomb : public Quadrangle
{
	protected:
		bool checking() override;

	public:
		Rhomb();
		Rhomb(int, int, int);
		virtual ~Rhomb();
};

#endif
