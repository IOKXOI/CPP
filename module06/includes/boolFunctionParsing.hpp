#pragma once
#include <sstream>

bool	isNum(const char c);
bool	isAlphaL(const char c);
bool	isAlphaU(const char c);
bool	containtForbidden(std::string input);
bool	containForbidenLetter(std::string input);
bool	invalidCharSequence(std::string input);
bool	badCharPosition(char c, int offset, int lenght);
bool	isChar(std::string input);
bool	isFloat(std::string input);
bool	isDouble(std::string input);
