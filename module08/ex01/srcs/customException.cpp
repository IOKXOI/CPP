#include "Span.hpp"

Span::customException::customException(const char *msg): _msg(msg) {}; 

const char*	Span::customException::what() const throw() {
	return _msg;
}
