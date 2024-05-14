#include "Serialize.hpp"

uintptr_t Serialize::serialize(Data* ptr) {
	return static_cast<uintptr_t> (ptr);
}

Data* Serialize::deserialize(uintptr_t raw) {
	return static_cast<Data*> (raw); 
}
