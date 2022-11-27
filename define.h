#include <string>

class Figure
{
	private:
		const int sides = 0;
		const std::string name = "Фигура: ";
	public:
		const std::string lable = "Количество сторон: ";
		virtual std::string getSides();
};

class Triangle : public Figure
{
	private:
		const int sides = 3;
		const std::string name = "Треугольник: ";
	public:
		std::string getSides() override;
};

class Quadrangle : public Triangle
{
	private:
		const int sides = 4;
		const std::string name = "Четырехугольник: ";
	public:
		std::string getSides() override;
};
