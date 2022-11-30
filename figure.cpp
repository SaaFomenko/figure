#include <string>
#include "define.h"


const std::string Triangle::name = "Треугольник: ";
const std::string Triangle::sides_lable = "Стороны: ";
const std::string Triangle::a_lable = " a=";
const std::string Triangle::b_lable = " b=";
const std::string Triangle::c_lable = " c=";

const std::string Triangle::angles_lable = "Углы: ";
const std::string Triangle::A_lable = " A=";
const std::string Triangle::B_lable = " B=";
const std::string Triangle::C_lable = " C=";

const std::string RightTriangle::name = "Прямоугольный треугольник: ";
const std::string IsoscelesTriangle::name = "Равнобедренный треугольник: ";
const std::string IquilateralTriangle::name = "Равносторонний треугольник: ";

const std::string Quadrangle::name = "Четырёхугольник: ";
const std::string Quadrangle::d_lable = " d=";
const std::string Quadrangle::D_lable = " D=";

const std::string RightQuadrangle::name = "Прямоугольник: ";
const std::string Quadrat::name = "Квадрат: ";
const std::string Parallelogram::name = "Параллелограм: ";
const std::string Rhomb::name = "Ромб: ";

std::string ParamToStr(
		const int& param,
		std::string& label_param,
		int size
		)
{
	std::string result = "";
	std::string separator = "";
	int center_index = size/2 - 1;

	for (int i = 0; i < size; ++i)
	{
		const std::string str_param = std::to_string(param[i]);
		if (i == center_index) separator = "\n";
		result += label_param[i] + str_param + separator;
	}
}

std::string Figure::getSides()
{
	const std::string s = std::to_string(sides);
	return name + s;
}

std::string Triangle::getSides()
{
	const std::string s = std::to_string(sides);
	return name + s;
}

std::string RightTriangle::getSides()
{
	const std::string s = std::to_string(sides);
	return name + s;
}

std::string Quadrangle::getSides()
{
	const std::string s = std::to_string(sides);
	return name + s;
}
