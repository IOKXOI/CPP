#pragma once 
#include <stack>

template <typename T>
MutantStack<T>::MutantStack(): std::stack<T>() {}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &toCopy): std::stack<T>(toCopy) {

}

template <typename T>
MutantStack<T>::MutantStack &operator=(const MutantStack &toCopy): std::stack<T>() {
	if (this != &toCopy) {
		std::stack<T>::operator=(toCopy);
	}
	return *this;
}

template <typename T>
MutantStack<T>::~MutantStack() {}

template <typename T>
typedef typename std::stack<T>::container_type::iterator iterator MutantStack::begin() {
	return this->c.begin();
}

template <typename T>
typedef typename std::stack<T>::container_type::const_iterator const_iterator MutantStack::begin() const {
	return this->c.begin();
}

template <typename T>
typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator MutantStack::end() {
	return this->c.end();
}

template <typename T>
typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator MutantStack::end() const {
	return this->c.end();
}
