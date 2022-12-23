#if !defined(ISOSCELESTRIANGLE_CLASS)
#define ISOSCELESTRIANGLE_CLASS

#include "triangle.h"


class IsoscelesTriangle : public Triangle
{
	protected:
		bool isIsoscelesSide();
		bool isIsoscelesAngle();

		void errCheck(std::string&) override;

	public:
		IsoscelesTriangle(int, int, int, int, int, int, int);
		IsoscelesTriangle(int, int, int, int);
		IsoscelesTriangle();
		virtual ~IsoscelesTriangle();
};

#endif
