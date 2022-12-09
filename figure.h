#pragma once

#include <string>


class Figure
{
	protected:
		int _sides;
		std::string _name;
		int ideal_sides;
		int sum_angles_triangles;
	
		int* angle_arr;
		int* side_arr;

		virtual bool checking();

	public:
		Figure();
		Figure(std::string, int);
		~Figure();

		std::string getName();

		int getCountSides();
		int* getSides();
		int* getAngles();
		virtual void getInfo();
};
