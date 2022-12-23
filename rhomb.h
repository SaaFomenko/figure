#if !defined(RHOMB_CLASS)
#define QUADRATE_CLASS

#include "quadrangle.h"


class Rhomb : public Quadrangle
{
	protected:
		bool isEqualSides();
		bool isEqualAngles();

		void errCheck(std::string&) override;

	public:
		Rhomb(int, int, int, int, int, int, int, int, int);
		Rhomb(int, int, int);
		Rhomb();
		virtual ~Rhomb();
};

#endif
