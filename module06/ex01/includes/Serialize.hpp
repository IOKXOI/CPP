#pragma once
#include <stdint.h>
#include "Data.hpp"

class	Serialize{
	public:
		static uintptr_t	serialize(Data* ptr);
		static Data*		deserialize(uintptr_t raw);

	private:
		Serialize();
		Serialize(const Serialize &toCopy);
		Serialize &operator=(const Serialize &toCopy);
		~Serialize();

};
