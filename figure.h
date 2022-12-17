#pragma once

#if !defined(FIGURE_CLASS)
#define FIGURE_CLASS

#include <string>


struct view
{
	static const std::string count_sides;
	static const std::string correct;
	static const std::string wrong;
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
	protected:
		int _ideal_sides;
		int _sides;
		std::string _name;
	
		Figure(std::string, int);

	public:
		Figure();
		virtual ~Figure();

		std::string getName();

		virtual bool checking();
		virtual void getInfo();
};

#endif
