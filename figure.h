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

void templFigure(int*, int*, int, std::string*);

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
