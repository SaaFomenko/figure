#include <string>


class Figure
{
	private:
		int _sides;
		std::string _name;
	
	protected:
/*		int _a;
		int _b;
		int _c;
		int _d;
		int _A;
		int _B;
		int _C;
		int _D;
*/
		int* angle_arr;
		int* side_arr;

	public:
		Figure(int, int, int, int, int, int, int, int, std::string, int);
		Figure(int, int, int, int, int, int, std::string, int);
		Figure(std::string, int);
		~Figure();

		std::string getName();

		int getCountSides();
		int* getSides();
		int* getAngles();
		/*
		int get_a();
		int get_b();
		int get_c();
		int get_d();
		int get_A();
		int get_B();
		int get_C();
		int get_D();
		*/
};

class Triangle : public Figure
{
	public:
		Triangle();
		Triangle(int, int, int, int, int, int);
//		~Triangle();
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
