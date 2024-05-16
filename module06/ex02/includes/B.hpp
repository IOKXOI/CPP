#pragma once
#include "Base.hpp"

class B: public Base {
	public: 
		B();
		B &operator=(const B &toCopy);
		~B();

		// int				bint;
		// std::string		identity;
};
