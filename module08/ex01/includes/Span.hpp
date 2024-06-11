#pragma once
#include <vector>
#include <stdint.h>

class Span {
	private:
		std::vector<int>	_elements;
		uint32_t			_N;
	
	public:
		Span();
		Span(uint32_t n);
		Span(const Span &toCopy);
		Span &operator=(const Span &toCopy);
		~Span();

		void		addNumber(int32_t n);
		uint32_t	shortestSpan();
		uint32_t	longestSpan();
		class		customException: public std::exception {
			private: 
				const char *_msg;
			public:
				customException(const char* msg); 
				const char *what() const throw();
		};
};
