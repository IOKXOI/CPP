#pragma once

#include <queue>
#include <iostream>
#include <stack>

class Calculator {
	public:
		static std::stack<int> _stack;
		static void	multiplication(void);
		static void	sum(void);
		static void	substraction(void);
		static void	division(void);
		static void	operate(const char operat);
		static bool	isOperatorChar(const char c);
		static void	calcul(const char** argv);
	
};