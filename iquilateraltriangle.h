#pragma once

#if !defined(IQUILATERALTRIANGLE_CLASS)
#define IQUILATERALTRIANGLE_CLASS

#include "triangle.h"


class IquilateralTriangle : public Triangle
{
	protected:
		bool checking() override;

	public:
		IquilateralTriangle(int);
		IquilateralTriangle();
		virtual ~IquilateralTriangle();
};

#endif
