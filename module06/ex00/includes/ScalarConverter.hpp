#pragma once
#include <string>
#include <sstream>
#include "boolFunctionParsing.hpp"

class ScalarConverter {
	public:
	
	ScalarConverter(std::string input);
	
	static void		convert(char *input);
	static int		getInputType(char *argv);
	static void		convertFromChar(char* input);
	static void		convertFromInt(char* input);
	static void		convertFromFloat(char* input);
	static void		convertFromDouble(char* input);
	static void		convertFromPInf();
	static void		convertFromNInf();
	static void		convertFromNan();
	
	class Overflow: public std::exception {
		virtual const char *what() const throw();
	};
	
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &toCopy);
		ScalarConverter &operator=(const ScalarConverter &toCopy);
		~ScalarConverter();

		static char		c;
		static int		i;
		static float	f;
		static double	d;
};
