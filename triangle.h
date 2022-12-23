#if !defined(TRIANGLE_CLASS)
#define TRIANGLE_CLASS

#include "figure.h"


class Triangle : public Figure
{
	protected:
		int _sum_angles;

		int _a;
		int _b;
		int _c;
		int _A;
		int _B;
		int _C;

		virtual bool isAngles();

		virtual void errCheck(std::string&) override;

		Triangle(int, int, int, int, int, int, std::string, int, int);

	public:
		Triangle(int, int, int, int, int, int, int);
		Triangle(int, int, int, int, int, int);
		Triangle();
		virtual ~Triangle();

		std::string getCreate() override;
};

#endif

