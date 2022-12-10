#include "figure.h"


class Triangle : public Figure
{
	protected:
		int ideal_sides;
		int _sum_angles;

		int _a;
		int _b;
		int _c;
		int _A;
		int _B;
		int _C;

		bool checking() override;
		bool isSum();

		Triangle(int, int, int, int, int, int, std::string, int);

	public:
		Triangle(int, int, int, int, int, int);
		Triangle();
		virtual ~Triangle();

		void getInfo() override;
};

class RightTriangle : public Triangle
{
	protected:
		bool checking() override;

	public:
		RightTriangle(int, int, int, int, int);
		RightTriangle();
		virtual ~RightTriangle();
};

class IsoscelesTriangle : public Triangle
{
	protected:
		bool checking() override;

	public:
		IsoscelesTriangle(int, int, int, int);
		IsoscelesTriangle();
		virtual ~IsoscelesTriangle();
};

class IquilateralTriangle : public Triangle
{
	protected:
		bool checking() override;

	public:
		IquilateralTriangle(int);
		IquilateralTriangle();
		virtual ~IquilateralTriangle();
};
