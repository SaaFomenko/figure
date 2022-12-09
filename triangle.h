#include "figure.h"


class Triangle : public Figure
{
	protected:
		bool cheking() override;

	public:
		Triangle();
		Triangle(int, int, int, int, int, int, std::string, int);

		void getInfo() override;
};

class RightTriangle : public Triangle
{
	public:
		RightTriangle();
		RightTriangle(int, int, int, int, int);
};

class IsoscelesTriangle : public Triangle
{
	public:
		IsoscelesTriangle();
		IsoscelesTriangle(int, int, int, int);
};

class IquilateralTriangle : public Triangle
{
	public:
		IquilateralTriangle();
		IquilateralTriangle(int);
};
