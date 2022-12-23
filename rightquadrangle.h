#if !defined(RIGHTQUADRANGLE_CLASS)
#define RIGHTQUADRANGLE_CLASS

#include "quadrangle.h"
#include "figure.h"


class RightQuadrangle : public Quadrangle
{
	protected:
		bool isEqualSides();
		bool isEqualAngles();

		void errCheck(std::string&) override;

	public:
		RightQuadrangle(int, int, int, int, int, int, int, int, int);
		RightQuadrangle(int, int);
		RightQuadrangle();
		virtual ~RightQuadrangle();
};

class RightQuadrangleException : public FigureException
{
	public:
		RightQuadrangleException(std::string);
		virtual ~RightQuadrangleException();
};

#endif
