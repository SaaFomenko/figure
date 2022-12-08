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

		static const std::string sides;
		static const std::string angles;
		static const std::string a;
		static const std::string b;
		static const std::string c;
		static const std::string d;
		static const std::string A;
		static const std::string B;
		static const std::string C;
		static const std::string D;

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
//		~Triangle();
//		Triangle(int, int, int, int, int, int);
};

class RightTriangle : public Figure
{
	public:
		RightTriangle();
};

class IsoscelesTriangle : public Figure
{
	public:
		IsoscelesTriangle();
};

class IquilateralTriangle : public Figure
{
	public:
		IquilateralTriangle();
};

class Quadrangle : public Figure
{
	public:
		Quadrangle();
//		~Quadrangle();
//		Quadrangle(int, int, int, int, int, int, int, int);
};

class RightQuadrangle : public Figure
{
	public:
		RightQuadrangle();
};

class Quadrate : public Figure
{
	public:
		Quadrate();
};

class Parallelogram : public Figure
{
	public:
		Parallelogram();
};

class Rhomb : public Figure
{
	public:
		Rhomb();
};
