#include <string>

class Figure
{
	private:
		int _sides;
		std::string _name;

	public:
		Figure(std::string, int);

		static const std::string lable;

		int getSides();
		std::string getName();
};

class Triangle : public Figure
{
	public:
		Triangle();
};

class Quadrangle : public Figure
{
	public:
		Quadrangle();
};
