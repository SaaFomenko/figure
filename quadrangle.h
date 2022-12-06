#include "triangle.h"


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
