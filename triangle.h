#pragma once

#include <string>
#include "figure.h"


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
