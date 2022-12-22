#if !defined(IQUILATERALTRIANGLE_CLASS)
#define IQUILATERALTRIANGLE_CLASS

#include "triangle.h"
#include "figure.h"


class IquilateralTriangle : public Triangle
{
	protected:
		bool isEqualSides();
		bool isEqualAngles();

		void errCheck(std::string&) override;

	public:
		IquilateralTriangle(int, int, int, int, int, int, int);
		IquilateralTriangle(int);
		IquilateralTriangle();
		virtual ~IquilateralTriangle();
};

class IquilateralTriangleException : public FigureException
{
	public:
		IquilateralTriangleException(std::string);
		virtual ~IquilateralTriangleException();
};

#endif
