#include <string>

class Figure
{
	private:
		const int sides = 0;
	public:
		static const std::string name;
		virtual std::string getSides();
};

class Triangle : public Figure
{
	private:
		const int sides = 3;
	
	protected:
		const int a = 10;
		const int b = 20;
		const int c = 30;
		const int A = 50;
		const int B = 60;
		const int C = 70;

	public:
		static const std::string name;
		static const std::string sides_lable;
		static const std::string angles_lable;
		static const std::string a_lable;
		static const std::string b_lable;
		static const std::string c_lable;
		static const std::string A_lable;
		static const std::string B_lable;
		static const std::string C_lable;
		
		std::string getSides() override;
		virtual std::string getStr();
};

class Quadrangle : protected Triangle
{
	private:
		const int sides = 4;

	protected:
		const int d = 40;
		const int D = 80;

	public:
		static const std::string name;

		std::string getSides() override;
		std::string getStr() override;
};

class RightTriangle : public Triangle
{
	protected:
		const int C = 90;

	public:
		static const std::string name;

		std::string getStr() override;
};

class IsoscelesTriangle : public Triangle
{
	protected:
		const int a = 10;
		const int c = a;
		const int C = 90;

	public:
		static const std::string name;

		std::string getStr() override;
};

class IquilateralTriangle : public Triangle
{
	protected:
		const int a = 30;
		const int b = a;
		const int c = a;
		const int A = 60;
		const int B = A;
		const int C = A;

	public:
		static const std::string name;

		std::string getStr() override;
};

class RightQuadrangle : public RightTriangle
{
	protected:
		const int c = a;
		const int d = b;
		const int A = C;
		const int B = C;
		const int D = C;

	public:
		static const std::string name;

		std::string getStr() override;
};

class Quadrate : public RightQuadrangle
{
	protected:
		const int a = b;
		const int c = b;

	public:
		static const std::string name;

		std::string getStr() override;
};

class Parallelogram : public Quadrate
{
	protected:
		const int a = 20;
		const int b = 30;
		const int c = a;
		const int d = b;
		const int A = 30;
		const int B = 40;
		const int C = A;
		const int D = B;

	public:
		static const std::string name;

		std::string getStr() override;
};

class Rhomb : public Parallelogram
{
	protected:
		const int a = b;
		const int c = b;
		
	public:
		static const std::string name;

		std::string getStr() override;
};
