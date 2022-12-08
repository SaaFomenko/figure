#include "figure.h"


class Triangle : public Figure
{
	protected:
		bool cheking() override;

	public:
		Triangle();
		Triangle(int, int, int, int, int, int);

		void getInfo() override;
};

class RightTriangle : public Figure
{
	public:
		RightTriangle();
		RightTriangle(int, int, int, int, int);
};

class IsoscelesTriangle : public Figure
{
	public:
		IsoscelesTriangle();
		IsoscelesTriangle(int, int, int, int);
};

class IquilateralTriangle : public Figure
{
	public:
		IquilateralTriangle();
		IquilateralTriangle(int);
};

