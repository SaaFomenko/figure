#if !defined(QUADRATE_CLASS)
#define QUADRATE_CLASS

#include "quadrangle.h"
#include "figure.h"


class Quadrate : public Quadrangle
{
	protected:
		bool isEqualSides();
		bool isEqualAngles();

		void errCheck(std::string&) override;


	public:
		Quadrate(int, int, int, int, int, int, int, int, int);
		Quadrate(int);
		Quadrate();
		virtual ~Quadrate();
};

class QuadrateException : public FigureException
{
	public:
		QuadrateException(std::string);
		virtual ~QuadrateException();
};

#endif
