#include "Span.hpp"
#include <algorithm>

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



template <typename Iterator>
void		Span::addNumbers(Iterator begin, Iterator end) {
	while (begin != end) {
        addNumber(*begin);
        begin++;
    }

}