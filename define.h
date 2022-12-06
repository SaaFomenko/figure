#pragma once
#include <string>


enum status
{
	success,
	error
};

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

enum figure
{
	sides,
	a,
	b,
	c,
	d,
	A,
	B,
	C,
	D,
};

class Figure
{
	private:
		const std::string name = "Фигура";

	protected:
		const int ideal_sides = 0;

		int _sides;

		virtual bool checking();

	public:
		Figure(int sides = 0);

		virtual status setField(int, figure);
		virtual const std::string getStr();
};

class Triangle : public Figure
{
	private:
		const std::string name = "Треугольник";

	protected:
		const int ideal_sides = 3;
		const int total_angles = 180;

		int _sides;
		int _a;
		int _b;
		int _c;
		int _A;
		int _B;
		int _C;

		virtual bool checking() override;

	public:
		Triangle(
				int sides = 3,
				int a = 10,
        int b = 20,
        int c = 30,
        int A = 50,
        int B = 60,
        int C = 70
				);

		virtual status setField(int, figure) override;
		virtual const std::string getStr() override;
};

class Quadrangle : public Triangle
{
	private:
		const std::string name = "Четырехугольник";

	protected:
		const int ideal_sides = 4;
		const int total_angles = 360;

		int _sides;
		int _d;
		int _B;
		int _D;

		virtual bool checking() override;

	public:
		Quadrangle(
				int sides = 4,
				int d = 40,
				int B = 100,
        int D = 140
				);
		
		virtual status setField(int, figure) override;
		virtual const std::string getStr() override;
};

class RightTriangle : public Triangle
{
	private:
		const std::string name = "Прямоугольный треугольник";

	protected:
		const int ideal_C = 90;
		int _A;
		int _C;

		virtual bool checking() override;

	public:
		RightTriangle(
				int A = 30,
        int C = 90
				);

		virtual const std::string getStr() override;
};
