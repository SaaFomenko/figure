#pragma once

#if !defined(QUADRATE_CLASS)
#define QUADRATE_CLASS

#include "quadrangle.h"


class Quadrate : public Quadrangle
{
	protected:
		bool checking() override;

	public:
		Quadrate();
		Quadrate(int);
		virtual ~Quadrate();
};

#endif
