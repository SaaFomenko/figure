#include <string>

class Figure
{
	private:
		const int sides = 0;
		const std::string name = "Фигура: ";
	public:
		const std::string lable = "Количество сторон: ";
		std::string str = "";
		void getStr(std::string name, const int sides);
		Figure();
};

class Triangle : public Figure
{
	private:
		const int sides = 3;
		const std::string name = "Треугольник: ";
	public:
		Triangle();
};

class Quadrangle : public Triangle
{
	private:
		const int sides = 4;
		const std::string name = "Четырехугольник: ";
	public:
		Quadrangle();
};
