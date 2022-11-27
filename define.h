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

	public:
		static const std::string name;

		std::string getSides() override;
		std::string getStr() override;
};

class RightTriangle : public Triangle
{
	protected:
		int C = 90;

	public:
		static const std::string name;

		std::string getStr() override;
};

class IsoscelesTriangle : public Triangle
{
	protected:
		int a = 10;
		int c = a;
		int C = 90;

	public:
		static const std::string name;

		std::string getStr() override;
};


