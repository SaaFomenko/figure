#if !defined(FIGURE_CLASS)
#define FIGURE_CLASS

#include <string>

class FigureException : public std::exception
{
	protected:
		std::string _err;

	public:
		
		FigureException(std::string);
		virtual ~FigureException();

		const char* what() const noexcept override;
};

class Figure
{
	protected:
		int _ideal_sides;
		int _sides;
		std::string _name;
	
		Figure(std::string, int, int);

	public:
		Figure();
		Figure(int);
		virtual ~Figure();

		std::string getName();

		virtual bool isSides();
		virtual std::string getCreate();
};

#endif
