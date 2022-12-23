#if !defined(QUADRANGLE_CLASS)
#define QUADRANGLE_CLASS

#include "figure.h"


class Quadrangle : public Figure
{
	protected:
		int _sum_angles;

		int _a;
		int _b;
		int _c;
		int _d;
		int _A;
		int _B;
		int _C;
		int _D;

		bool isAngles();
		virtual void errCheck(std::string&);

		Quadrangle(
				int, int, int, int, int, int, int, int, std::string, int
				);

	public:
		Quadrangle(int, int, int, int, int, int, int, int, int);
		Quadrangle();
		virtual ~Quadrangle();

		std::string getCreate() override;
};

#endif
