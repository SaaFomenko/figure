#include <string>


struct view
{
	static const std::string count_sides;
};

class Figure
{
	protected:
		std::string _name;
		int _sides;

	public:
		Figure(std::string, int);


		int getSides();
		std::string getName();
};

class Triangle : public Figure
{
//	std::string _name;
//	int _sides;

	public:
		Triangle();
		Triangle(std::string, int);
};

class Quadrangle : public Triangle
{
	public:
		Quadrangle();
};
