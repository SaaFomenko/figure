#pragma once

#if !defined(RIGHTTRIANGLE_CLASS)
#define RIGHTTRIANGLE_CLASS

#include "triangle.h"


class RightTriangle : public Triangle
{
	protected:
		bool checking() override;

	public:
		RightTriangle(int, int, int, int, int);
		RightTriangle();
		virtual ~RightTriangle();
};

#endif
