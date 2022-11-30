#include <string>

class Figure
{
	private:
		const int sides = 0;
		const std::string name = "Фигура: ";
	public:
		const std::string lable = "Количество сторон: ";
		std::string str = "";
		void getStr(std::string name, int sides);
		virtual void getSides();
};

class Triangle : public Figure
{
	private:
		const int sides = 3;
		const std::string name = "Треугольник: ";
	public:
		void getSides() override;
};

class Quadrangle : public Triangle
{
	private:
		const int sides = 4;
		const std::string name = "Четырехугольник: ";
	public:
		void getSides() override;
};
