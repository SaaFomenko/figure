#include <string>
#include "define.h"



const std::string Triangle::name = "Треугольник: ";
const std::string RightTriangle::name = "Прямоугольный треугольник: ";
const std::string IsoscelesTriangle::name = "Равнобедренный треугольник: ";
//const std::string IsoscelesTriangle::name = "Равнобедренный треугольник: ";
const std::string Triangle::sides_lable = "Стороны: ";
const std::string Triangle::angles_lable = "Углы: ";

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
