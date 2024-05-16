#pragma once 
#include "Base.hpp"

class C: public Base {
	public: 
		C();
		C &operator=(const C &toCopy);
		~C();

		// int				cint;
		// std::string		identity;
};
