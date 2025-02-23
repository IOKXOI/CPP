#pragma once
#include <stack>
#include <list>


template <typename T>
class MutantStack: public std::stack<T> {
	private:

	public:
		MutantStack();
		MutantStack(const MutantStack<T> &toCopy);
		MutantStack<T>& operator=(const MutantStack<T> &toCopy);
		virtual ~MutantStack();

	// typedef typename std::stack<T>::container_type::reverse_iterator iterator;
	// typedef typename std::stack<T>::container_type::const_reverse_iterator const_iterator;
	// typedef typename std::stack<T>::container_type::iterator reverse_iterator;
	// typedef typename std::stack<T>::container_type::const_iterator const_reverse_iterator;

	// typename MutantStack<T>::iterator				begin() {
	// 	return this->c.rbegin();
	// }
	// typename MutantStack<T>::iterator				end() {
	// 	return this->c.rend();
	// }
	// typename MutantStack<T>::iterator				begin() const {
	// 	return this->c.rbegin();
	// }
	// typename MutantStack<T>::iterator				end() const {
	// 	return this->c.rend();
	// }

	// typename MutantStack<T>::reverse_iterator			rbegin() {
	// 	return this->c.begin();
	// }

	// typename MutantStack<T>::reverse_iterator			rend() {
	// 	return this->c.end();
	// }

	// typename MutantStack<T>::reverse_iterator			rbegin() const {
	// 	return this->c.begin();
	// }
	
	// typename MutantStack<T>::reverse_iterator			rend() const {
	// 	return this->c.end();
	// }

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;


	typename MutantStack<T>::iterator					begin();
	typename MutantStack<T>::iterator					end();
	typename MutantStack<T>::const_iterator				begin() const;
	typename MutantStack<T>::const_iterator				end() const;

	typename MutantStack<T>::reverse_iterator			rbegin();
	typename MutantStack<T>::reverse_iterator			rend();
	typename MutantStack<T>::const_reverse_iterator		rbegin() const;
	typename MutantStack<T>::const_reverse_iterator		rend() const;
};

#include "../srcs/MutantStack.tpp"