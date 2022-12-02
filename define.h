#include <string>

enum side {a, b, c, d};
enum angle {A, B, C, D};

struct lable
{
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
};

class Figure
{
	private:
		const std::string name = "Фигура";

	protected:
		const int sides = 0;
//		const int* side;
//		const int* angle;
		void getStr(const int* side, const int* angle, const int sides);

	public:
		std::string str = "";
//		Figure();
};

class Triangle : public Figure
{
	private:
		const std::string name = "Треугольник";

	protected:
		const int sides = 3;

	public:
		Triangle();
};

class Quadrangle : public Triangle
{
	private:
		const std::string name = "Четырехугольник";

	protected:
		const int sides = 4;

	public:
		Quadrangle();
};
