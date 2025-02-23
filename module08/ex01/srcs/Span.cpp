#include "Span.hpp"
#include <algorithm>
#include <iostream>
#include <limits>


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
        throw customException("Container must have more than 1 element for this operation");

    int minElem = *std::min_element(_elements.begin(), _elements.end());
    int maxElem = *std::max_element(_elements.begin(), _elements.end());

	int ret = maxElem - minElem;
	if (ret > 0) {
		ret -= 1;
	}
    return ret;
}

uint32_t	Span::shortestSpan() {
	if (_elements.size() < 2)
        throw customException("Container must have more than 1 element for this operation");

	std::sort(_elements.begin(), _elements.end());

	int minSpan = std::numeric_limits<int>::max();

	for (size_t i = 1; i < _elements.size(); i++) {
        int diff = _elements[i] - _elements[i - 1];
        if (diff < minSpan) {
            minSpan = diff;
        }
    }
	if (minSpan > 0)
		minSpan -= 1;
	return minSpan;
}

