#if !defined(RIGHTTRIANGLE_CLASS)
#define RIGHTTRIANGLE_CLASS

#include "triangle.h"
#include "figure.h"


class RightTriangle : public Triangle
{
	protected:
		bool isRightAngle();

		void errCheck(std::string&) override;

	public:
		RightTriangle(int, int, int, int, int, int, int);
		RightTriangle(int, int, int, int, int);
		RightTriangle();
		virtual ~RightTriangle();
};

#endif
