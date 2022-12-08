#pragma once

#include <string>


class Figure
{
	private:
		int _sides;
		std::string _name;
		static const int ideal_sides;
		static const int sum_angles_triangles;
	
	protected:
/*		int _a;
		int _b;
		int _c;
		int _d;
		int _A;
		int _B;
		int _C;
		int _D;
*/
		int* angle_arr;
		int* side_arr;

		virtual bool checking();

	public:
		Figure(int, int, int, int, int, int, int, int, std::string, int);
		Figure(int, int, int, int, int, int, std::string, int);
		Figure(std::string, int);
		Figure();
		~Figure();

		std::string getName();

		int getCountSides();
		int* getSides();
		int* getAngles();
		virtual void getInfo();
		/*
		int get_a();
		int get_b();
		int get_c();
		int get_d();
		int get_A();
		int get_B();
		int get_C();
		int get_D();
		*/
};

