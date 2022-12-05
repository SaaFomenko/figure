#include <string>


struct lable
{
	static const std::string count_sides;
	static const std::string sides;
	static const std::string angles;
	static const std::string correct;
	static const std::string wrong;
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
		std::string class_name = "";
		const int ideal_sides = 0;
		int sides = 0;
		bool check = true;

	public:
		Figure();
		Figure(int sides);
		virtual void checking();
		virtual const std::string getStr();
};

class Triangle : public Figure
{
	private:
		const std::string name = "Треугольник";

	protected:
		const int ideal_sides = 3;
		const int total_angles = 180;
		int sides = 3;
		bool check = true;

		int a = 10;
		int b = 20;
		int c = 30;
		int A = 50;
		int B = 60;
		int C = 70;

		virtual void checking() override;
		virtual const std::string getStr() override;

	public:
		Triangle();
		Triangle(
				int a,
        int b,
        int c,
        int A,
        int B,
        int C,
				int sides
				);
};

class Quadrangle : public Triangle
{
	private:
		const std::string name = "Четырехугольник";

	protected:
		const int ideal_sides = 4;
		const int total_angles = 360;
		int sides = 4;
		bool check = true;

		int d = 50;
		int B = 100;
		int D = 140;

	public:
		Quadrangle();
		Quadrangle(
				int a,
        int b,
        int c,
				int d,
        int A,
        int B,
        int C,
        int D,
				int sides
				);
		
		virtual void checking() override;
		virtual const std::string getStr() override;
};

class RightTriangle : public Triangle
{
	private:
		const std::string name = "Прямоугольный треугольник";

	protected:
		bool check = true;
		const int ideal_C = 90;
		int C = 90;

	public:
		RightTriangle();
		RightTriangle(
				int a,
        int b,
        int c,
        int A,
        int B,
        int C,
				int sides
				);

		virtual void checking() override;
		virtual const std::string getStr() override;
};
