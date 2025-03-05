#include "RPN.hpp"
#include <cstdlib>
#include <cstring>
#include <cerrno>
#include <stdlib.h> 
#include <cstdio>
#include <exception>

std::stack<int> Calculator::_stack;

// void Calculator::print_stack() {
// 	std::stack<int> print(_stack);

// 	std::cout << "______________" << std::endl;
// 	while (print.size()) {
// 		std::cout << print.top() << std::endl;
		
// 		print.pop();
// 	}
// 	std::cout << "______________" << std::endl;
// }


void	Calculator::multiplication() {
	int	a;
	int b;
	if (!(_stack.size() > 1)) {
		throw std::runtime_error("Invalid operand format.");
	}
		a = _stack.top();
		_stack.pop();
		b = _stack.top();
		_stack.pop();
		_stack.push(a * b);
}

void	Calculator::sum() {
	int	a;
	int b;

	if (!(_stack.size() > 1)) {
		throw std::runtime_error("Invalid operand format.");
	}
		a = _stack.top();
		_stack.pop();
		b = _stack.top();
		_stack.pop();
		_stack.push(a + b);
}

void	Calculator::substraction() {
	int	a;
	int b;

	if (!(_stack.size() > 1)) {
		throw std::runtime_error("Invalid operand format.");
	}
		a = _stack.top();
		_stack.pop();
		b = _stack.top();
		_stack.pop();
		_stack.push(b - a);
}

void	Calculator::division() {
	int	a;
	int b;

	if (!(_stack.size() > 1)) {
		throw std::runtime_error("Invalid operand format.");
	}
		a = _stack.top();
		_stack.pop();
		b = _stack.top();
		_stack.pop();
		if (a == 0 || b == 0) {
			throw std::runtime_error("Impossible division 0.");
		}
		_stack.push(b / a);
}

void	Calculator::operate(const char operat) {
	switch (operat) {
		case '*':
			multiplication();
			break;
		case '+':
			sum();
			break;
		case '-':
			substraction();
			break;
		case '/':
			division();
			break;
	}
}

bool	Calculator::isOperatorChar(const char c) {
	if (c == '+' || c == '-' || c == '*' || c == '/') {
		return (1);
	}
	return (0);
}

void	Calculator::calcul(const char** argv) {
	long		number;
	const char*	start_ptr = argv[1];
	char*		end_ptr;

	try {
		for (;;) {
			errno = 0;
			number = strtol(start_ptr, &end_ptr, 10);
			if (errno) {
				std::cerr << "Error: " << strerror(errno) << std::endl;;
				return;
			}
			else if (isOperatorChar(*start_ptr)) {
				if (_stack.empty()) {
					std::cerr << "Error: operator before operands." << std::endl;;
					return;
				}
				else {
					operate(*start_ptr);
					end_ptr++;
				}
			}
			else if (std::isdigit(*start_ptr)) {
				_stack.push(number);
			}
			if (end_ptr == start_ptr) {
				if (*end_ptr == '\0') {
					break;
				}
				else {
					std::cout << "Error: input containt invalid character" << std::endl;
					return;
				}
			}
			start_ptr = end_ptr;
			while (isspace(*start_ptr)) {
				start_ptr++;
			}
		}
		std::cout << _stack.top() << std::endl;
		_stack.pop();
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
