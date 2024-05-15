#include "Data.hpp"
#include "Serialize.hpp"
#include <iostream> 
#include "colors.hpp"

int main(void) {
	Data *data;
	Data *test;

	data = new Data();
	test = new Data();


	data->cmember = '0';
	data->imember = 0;
	data->fmember = 0;
	data->dmember = 0;

	std::cout << "ZER0" << std::endl;
	std::cout << "Char:"	<< data->cmember << std::endl;
	std::cout << "Int:"		<< data->imember << std::endl;
	std::cout << "Float:"	<< data->fmember << std::endl;
	std::cout << "Double:"	<< data->dmember << std::endl;

	std::cout << RED << "BASE" <<  std::endl;
	std::cout << "Char:"	<< test->cmember << std::endl;
	std::cout << "Int:"		<< test->imember << std::endl;
	std::cout << "Float:"	<< test->fmember << std::endl;
	std::cout << "Double:"	<< test->dmember << RESET << std::endl;
	
	
	uintptr_t testptr = Serialize::serialize(data);
	test = Serialize::deserialize(testptr);

	std::cout << "ZER0" << std::endl;
	std::cout << "Char:"	<< data->cmember << std::endl;
	std::cout << "Int:"		<< data->imember << std::endl;
	std::cout << "Float:"	<< data->fmember << std::endl;
	std::cout << "Double:"	<< data->dmember << std::endl;

	std::cout << RED << "BASE" <<  std::endl;
	std::cout << "Char:"	<< test->cmember << std::endl;
	std::cout << "Int:"		<< test->imember << std::endl;
	std::cout << "Float:"	<< test->fmember << std::endl;
	std::cout << "Double:"	<< test->dmember << RESET << std::endl;

	return 0;
}
