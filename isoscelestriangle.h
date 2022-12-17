#pragma once

#if !defined(ISOSCELESTRIANGLE_CLASS)
#define ISOSCELESTRIANGLE_CLASS

#include "triangle.h"


class IsoscelesTriangle : public Triangle
{
	protected:
		bool checking() override;

	public:
		IsoscelesTriangle(int, int, int, int);
		IsoscelesTriangle();
		virtual ~IsoscelesTriangle();
};

#endif
