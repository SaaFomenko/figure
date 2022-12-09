#pragma once

#include <string>


class Figure
{
	protected:
		int _sides;
		std::string _name;
	
		int* angle_arr;
		int* side_arr;

	public:
		Figure();
		Figure(std::string, int);
		~Figure();

		std::string getName();

		int getCountSides();
		int* getSides();
		int* getAngles();
		virtual bool checking();
		virtual void getInfo();
};
