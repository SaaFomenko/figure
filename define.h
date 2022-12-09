#include <string>


struct view
{
	static const std::string count_sides;
}

class Figure
{
	private:
		int _sides;
		std::string _name;

	public:
		Figure(std::string, int);


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
