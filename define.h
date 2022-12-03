#include <string>

enum status
{
	err_arr,
	success
};

struct lable
{
	static const std::string sides;
	static const std::string angles;
	static const std::string a;
	static const std::string b;
	static const std::string c;
	static const std::string d;
	static const std::string A;
	static const std::string B;
	static const std::string C;	
	static const std::string D;	
};

class Figure
{
	private:
		const std::string name = "Фигура";

	protected:
		const int sides = 0;
		void getStr(
				int* side,
				int* angle,	
				const int sides,
				const std::string name
				);

	public:
		std::string str = "";
};

class Triangle : public Figure
{
	private:
		const std::string name = "Треугольник";

	protected:
		const int sides = 3;

		const int a = 10;
		const int b = 20;
		const int c = 30;
		const int A = 50;
		const int B = 60;
		const int C = 70;

	public:
		Triangle();
};

class Quadrangle : public Triangle
{
	private:
		const std::string name = "Четырехугольник";

	protected:
		const int sides = 4;

		const int d = 50;
		const int D = 80;

	public:
		Quadrangle();
};

class RightTriangle : public Triangle
{
	private:
		const std::string name = "Треугольник";

	protected:
		const int C = 90;

	public:
		RightTriangle();
};


class IsoscelesTriangle : public Triangle
{
	private:
		const std::string name = "Равнобедренный треугольник";

	protected:
		const int c = a;
		const int D = A;

	public:
		IsoscelesTriangle();

};

class IquilateralTriangle : public Triangle
{
	private:
		const std::string name = "Равносторонний треугольник";

	protected:
		const int a = 30;
		const int b = a;
		const int c = a;
		const int A = 60;
		const int B = A;
		const int C = A;

	public:
		IquilateralTriangle();
};

class RightQuadrangle : public RightTriangle
{
	private:
		const std::string name = "Прямоугольник";

	protected:
		const int sides = 4;

		const int c = a;
		const int d = b;
		const int A = C;
		const int B = C;
		const int D = C;

	public:
		RightQuadrangle();
};

class Quadrate : public RightQuadrangle
{
	private:
		const std::string name = "Квадрат";

	protected:
		const int sides = 4;

		const int a = b;
		const int c = b;

	public:
		Quadrate();
};

class Parallelogram : public Quadrate
{
	private:
		const std::string name = "Параллелограмм";

	protected:
		const int sides = 4;

		const int a = 20;
		const int b = 30;
		const int c = a;
		const int d = b;
		const int A = 30;
		const int B = 40;
		const int C = A;
		const int D = B;

	public:
		Parallelogram();
};

class Rhomb : public Parallelogram
{
	private:
		const std::string name = "Ромб";
		
	protected:
		const int sides = 4;

		const int a = b;
		const int c = b;
		
	public:
		Rhomb();
};
