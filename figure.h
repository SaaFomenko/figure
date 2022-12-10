#pragma once

#include <string>


class Figure
{
	protected:
		int ideal_sides;
		int _sides;
		std::string _name;
	
//		int* angle_arr;
//		int* side_arr;

		Figure(std::string, int);

	public:
		Figure();
		virtual ~Figure();

		std::string getName();

//		int getCountSides();
//		int* getSides();
//		int* getAngles();
		virtual bool checking();
		virtual void getInfo();
};
