#include "figure.h"


class Quadrangle : public Figure
{
	protected:
		int ideal_sides;
		int _sum_angles;

		int _a;
		int _b;
		int _c;
		int _d;
		int _A;
		int _B;
		int _C;
		int _D;

		bool checking() override;
		bool isSum();

		Quadrangle(
				int, int, int, int, int, int, int, int, std::string, int
				);

	public:
		Quadrangle();
		virtual ~Quadrangle();

		void getInfo() override;
};

class RightQuadrangle : public Quadrangle
{
	protected:
		bool checking() override;

	public:
		RightQuadrangle();
		RightQuadrangle(int, int);
		virtual ~RightQuadrangle();
};

class Quadrate : public Quadrangle
{
	protected:
		bool checking() override;

	public:
		Quadrate();
		Quadrate(int);
		virtual ~Quadrate();
};

class Parallelogram : public Quadrangle
{
	protected:
		bool checking() override;

	public:
		Parallelogram();
		Parallelogram(int, int, int, int);
		virtual ~Parallelogram();
};

class Rhomb : public Quadrangle
{
	protected:
		bool checking() override;

	public:
		Rhomb();
		Rhomb(int, int, int);
		virtual ~Rhomb();
};
