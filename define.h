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
		int* param = nullptr;
		int size = 0;
		std::string* lable_param = nullptr;
		std::string str = "";
		virtual void paramArr();

	public:
		Triangle();
		static const std::string name;
		static const std::string sides_lable;
		static const std::string angles_lable;
		static const std::string a_lable;
		static const std::string b_lable;
		static const std::string c_lable;
		static const std::string A_lable;
		static const std::string B_lable;
		static const std::string C_lable;
		
		std::string makeStr(int* param, std::string* lable_param, int size);
		std::string getSides() override;
//		virtual std::string getStr();
};

class Quadrangle : protected Triangle
{
	private:
		const int sides = 4;

	protected:
		const int d = 40;
		const int D = 80;
		void paramArr() override;

	public:
		Quadrangle();
		static const std::string name;
		static const std::string d_lable;
		static const std::string D_lable;

		std::string getSides() override;
//		std::string getStr() override;
};

class RightTriangle : public Triangle
{
//	using Triangle::Triangle;
	protected:
		const int C = 90;

	public:
		RightTriangle();
		static const std::string name;
//		std::string getStr() override;
};

class IsoscelesTriangle : public Triangle
{
	protected:
		const int a = 10;
		const int c = a;
		const int C = 90;

	public:
		IsoscelesTriangle();
		static const std::string name;
//		using Triangle::Triangle;
//		std::string getStr() override;
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
		IquilateralTriangle();
		static const std::string name;

//		std::string getStr() override;
};

class RightQuadrangle : public RightTriangle,  public Quadrangle
{
	protected:
		const int c = a;
		const int d = b;
		const int A = C;
		const int B = C;
		const int D = C;
//		void paramArr() override;

	public:
		RightQuadrangle();
		static const std::string name;
//		std::string getStr() override;
};

class Quadrate : public RightQuadrangle
{
	protected:
		const int a = b;
		const int c = b;

	public:
		Quadrate();
		static const std::string name;
//		std::string getStr() override;
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
		Parallelogram();
		static const std::string name;
//		std::string getStr() override;
};

class Rhomb : public Parallelogram
{
	protected:
		const int a = b;
		const int c = b;
		
	public:
		Rhomb();
		static const std::string name;
//		std::string getStr() override;
};
