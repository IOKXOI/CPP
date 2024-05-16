#pragma once
#include "Base.hpp"

class A: public Base {
	public: 
		A();
		A &operator=(const A &toCopy);
		~A();

		// int				aint;
		// std::string		identity;
};
