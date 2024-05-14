#include "Data.hpp"

Data::Data(): cmember('a'), imember(42), fmember(42.42f), dmember(42.42){}

Data::Data(const Data &toCopy) {
	cmember = toCopy.cmember;
	fmember = toCopy.imember;
	dmember = toCopy.dmember;
	imember = toCopy.imember;
}

Data &Data::operator=(const Data &toCopy) {
	if (this != &toCopy) {
		cmember = toCopy.cmember;
		fmember = toCopy.imember;
		dmember = toCopy.dmember;
		imember = toCopy.imember;
	}
	return (*this);
}

Data::~Data() {};
