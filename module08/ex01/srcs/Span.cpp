#include "Span.hpp"

Span::Span() {}

Span::Span(uint32_t n) {
	_N = n;
}


Span::Span(const Span &toCopy) {
	_N = toCopy._N;
}


Span	&Span::operator=(const Span &toCopy) {
	if (this != &toCopy) {
		_N = toCopy._N;
	}
	return (*this);
}

Span::~Span() {}

void	Span::addNumber(int n) {
	if (_elements.size() < _N) {
		_elements.push_back(n);
		return;
	}
	throw (customException("Span is full of element."));
	return; 
}

uint32_t	Span::longestSpan() {
	int	min;
	int	max;

	if (_elements.size() < 2)
		return(0);
	for (std::vector<int>::iterator it = _elements.begin(); it != _elements.end(); it++) {
		if (*it < min) {
			min = *it;
		}
		else if (*it > max) {
			max = *it;
		}
	}
	return (max - min);
}

uint32_t	Span::shortestSpan() {
	int	min;
	int	max;


	if (_elements.size() < 2)
		return(0);
	min = _elements[0];
	max = _elements[1];
}


