#include <string>
#include "define.h"

void Figure::getStr(std::string name, int sides)
{
	str = name +  std::to_string(sides);
}

Figure::Figure()
{
	getStr(name, sides);
}
/*void Figure::getSides()
{
	getStr(name, sides);
}
*/

Triangle::Triangle()
{
	getStr(name, sides);
}

Quadrangle::Quadrangle()
{
	getStr(name, sides);
}
//void Triangle::getSides()
//{
	//getStr(name, sides);
//	return str;
//}
/*
void Quadrangle::getSides(){
	getStr(name, sides);
}
*/
