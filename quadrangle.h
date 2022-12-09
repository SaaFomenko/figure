#include "figure.h"


class Quadrangle : public Figure
{
	public:
		Quadrangle();
		Quadrangle(int, int, int, int, int, int, int, int, std::string, int);
//		~Quadrangle();
};

class RightQuadrangle : public Quadrangle
{
	public:
		RightQuadrangle();
		RightQuadrangle(int, int);
};

class Quadrate : public Quadrangle
{
	public:
		Quadrate();
		Quadrate(int);
};

class Parallelogram : public Quadrangle
{
	public:
		Parallelogram();
		Parallelogram(int, int, int, int);
};

class Rhomb : public Quadrangle
{
	public:
		Rhomb();
		Rhomb(int, int, int);
};
