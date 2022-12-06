#include <string>
#include "triangle.h"


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
