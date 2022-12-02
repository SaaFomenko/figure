#include <string>
#include "define.h"


const std::string row_separator = "\n";

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
const std::string Quadrate::name = "Квадрат: ";
const std::string Parallelogram::name = "Параллелограм: ";
const std::string Rhomb::name = "Ромб: ";

void Triangle::paramArr()
{
	int param[] = {a, b, c, A, B, C};
	this->param = param;

	int size = sizeof(param) / sizeof(param[0]);
	this->size = size;

	std::string lable_param[] = {
		sides_lable + a_lable,
		b_lable,
		c_lable,
		angles_lable + A_lable,
		B_lable,
		C_lable,
	};
	this->lable_param = lable_param;
}

Triangle::Triangle()
{
	paramArr();
	str = makeStr(param, lable_param, size);
}

std::string Triangle::makeStr(
		int* param,
		std::string* lable_param,
		int size
		)
{
	std::string result = "";
	
	if (param != nullptr && lable_param != nullptr)
	{
		std::string separator = "";
		int center_index = size/2 - 1;
  
		for (int i = 0; i < size; ++i)
		{
			const std::string str_param = std::to_string(param[i]);
			if (i == center_index) separator = row_separator;
			result += lable_param[i] + str_param + separator;
		}
	}
	else
	{
		result = "none";
	}

	return name + result;
}

RightTriangle::RightTriangle()
{
	paramArr();
	str = makeStr(param, lable_param, size);
}

IsoscelesTriangle::IsoscelesTriangle()
{
	paramArr();
	str = makeStr(param, lable_param, size);
}

IquilateralTriangle::IquilateralTriangle()
{
	paramArr();
	str = makeStr(param, lable_param, size);
}

void Quadrangle::paramArr()
{
	int param[] = {a, b, c, A, B, C, D};
	this->param = param;

	int size = sizeof(param) / sizeof(param[0]);
	this->size = size;

	std::string lable_param[] = {
		sides_lable + a_lable,
		b_lable,
		c_lable,
		d_lable,
		angles_lable + A_lable,
		B_lable,
		C_lable,
		D_lable,
	};
	this->lable_param = lable_param;
}

Quadrangle::Quadrangle()
{
	paramArr();
	str = makeStr(param, lable_param, size);
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

std::string Quadrangle::getSides()
{
	const std::string s = std::to_string(sides);
	return name + s;
}
