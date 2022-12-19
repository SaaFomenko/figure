#pragma once

#if !defined(RIGHTQUADRANGLE_CLASS)
#define RIGHTQUADRANGLE_CLASS

#include "quadrangle.h"


class RightQuadrangle : public Quadrangle
{
	protected:
		bool checking() override;

	public:
		RightQuadrangle();
		RightQuadrangle(int, int);
		virtual ~RightQuadrangle();
};

#endif
