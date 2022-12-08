#include "figure.h"


class Quadrangle : public Figure
{
	public:
		Quadrangle();
		Quadrangle(int, int, int, int, int, int, int, int);
//		~Quadrangle();
};

class RightQuadrangle : public Figure
{
	public:
		RightQuadrangle();
		RightQuadrangle(int, int);
};

class Quadrate : public Figure
{
	public:
		Quadrate();
		Quadrate(int);
};

class Parallelogram : public Figure
{
	public:
		Parallelogram();
		Parallelogram(int, int, int, int);
};

class Rhomb : public Figure
{
	public:
		Rhomb();
		Rhomb(int, int, int);
};
