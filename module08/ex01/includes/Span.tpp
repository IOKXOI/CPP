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

uint32_t	Span::longestSpan() {
	if (_elements.size() < 2)
		throw (customException("Container must have more than 1 element for this operation"));

	std::vector	<int>sorted = _elements;
	std::sort(sorted.begin(), sorted.end());
	int interval = sorted[1] - sorted[0];
	for (std::vector<int>::iterator it = sorted.begin(); it != sorted.end(); it++) {
		if (sorted[*(it + 1)] - sorted[*it] > interval)
			interval = sorted[*(it + 1)] - sorted[*it];
	}
	return (interval);
}

uint32_t	Span::shortestSpan() {
	if (_elements.size() < 2)
		return(0);
	std::vector	<int>sorted = _elements;
	std::sort(sorted.begin(), sorted.end());
	int interval = sorted[1] - sorted[0];
	for (std::vector<int>::iterator it = sorted.begin(); it != sorted.end(); it++) {
		if (sorted[*(it + 1)] - sorted[*it] < interval)
			interval = sorted[*(it + 1)] - sorted[*it];
	}
	return (interval);
}

template <typename Iterator>
void		Span::addNumbers(Iterator begin, Iterator end) {
	while (begin != end) {
        addNumber(*begin);
        begin++;
    }

}