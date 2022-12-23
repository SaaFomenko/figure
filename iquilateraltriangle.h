#if !defined(IQUILATERALTRIANGLE_CLASS)
#define IQUILATERALTRIANGLE_CLASS

#include "triangle.h"


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

#endif
