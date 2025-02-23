#include "Serialize.hpp"

Serialize::Serialize() {}

Serialize::Serialize(const Serialize &toCopy) { 
	(void)toCopy;
};

Serialize &Serialize::operator=(const Serialize &toCopy) {
	(void)toCopy;
	return (*this);
};
Serialize::~Serialize() {}

uintptr_t Serialize::serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t> (ptr);
}

Data* Serialize::deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*> (raw); 
}
