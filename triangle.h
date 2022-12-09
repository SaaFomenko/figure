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
	protected:
		bool cheking() override;

	public:
		RightTriangle();
		RightTriangle(int, int, int, int, int);
};

class IsoscelesTriangle : public Triangle
{
	int ideal_A;
	protected:
		bool cheking() override;

	public:
		IsoscelesTriangle();
		IsoscelesTriangle(int, int, int, int);
};

class IquilateralTriangle : public Triangle
{
	protected:
		bool cheking() override;

	public:
		IquilateralTriangle();
		IquilateralTriangle(int);
};
