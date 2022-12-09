#include <string>


class Figure
{
	protected:
		int _sides;
		std::string _name;

		int* angle_arr;
		int* side_arr;

	public:
		Figure();
		Figure(std::string, int);
		~Figure();

		std::string getName();

		int getCountSides();
		int* getSides();
		int* getAngles();
};

class Triangle : public Figure
{
	public:
		Triangle();
		Triangle(int, int, int, int, int, int, std::string, int);
//		~Triangle();
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
