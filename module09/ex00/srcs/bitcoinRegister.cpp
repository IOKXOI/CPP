#include "bitcoinRegister.hpp"
#include <stdexcept>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <stdint.h>
#include <cstdlib>
#include <algorithm>

bool	Exchange::containsOnlyDigits(const std::string& str) {
	uint8_t	point = 0;
	for (size_t i = 0; i < str.length(); ++i) {
		if (!std::isdigit(str[i]) && str[i] != '.') {
			return false; // if not number or point, return false;
		}
		else if (str[i] == '.') {
			point++;
			if (point > 1) {
				return false; // if more than one point, return false;
			}
		}
	}
	return true; // All good
}

bool	Exchange::containsOnlyZeros(const std::string& str) {
	for (size_t i = 0; i < str.length(); ++i) {
		if (str[i] != '0') {
			return false; // if contain other than 0
		}
	}
	return true; // All good
}

void	Exchange::fill_db(std::ifstream &csv_file) {
	//check time format and add on map container if good
	std::string			key;
	std::string			line;
	std::istringstream	iss;
	float				value;
	struct tm			tm;

	std::getline(csv_file, line);
	if (line != "date,exchange_rate") {
		throw std::runtime_error("Invalid file format");
	}
	while (std::getline(csv_file, key, ',')) {
		if (!strptime(key.c_str(), "%Y-%m-%d", &tm)) {
			throw std::runtime_error("Invalid time format.");
		}
		else if (std::getline(csv_file, line)) {
			if (!containsOnlyDigits(line)){
				throw std::runtime_error("Invalid price format.");
			}
			value = atof(line.c_str());
			if (!value && !containsOnlyZeros(line)){
				throw std::runtime_error("Atof encountered an error.");
			}
			else
				_db.insert(std::make_pair(key, value));
		}
	}
}

void	Exchange::parse_file(const char* filename) {

	// Check if file can open
	std::ifstream	csv_file(filename);
	if (!csv_file.is_open()) {
		throw std::runtime_error("Cannot open csv_file.");
	}
	try {
		fill_db(csv_file);
	}
	catch (const std::runtime_error& e) {
		std::cerr << "Error : " << e.what() << std::endl;
	}
}

void	Exchange::convert(const char* input) {

	float									value;
	struct tm								tm;
	std::map<std::string, float>::iterator	it;

	std::string								total_line;
	std::string								input_date;
	std::string								input_value;
	std::string::size_type					pos;

	//check if file can open
	std::ifstream	input_file(input);
	if (!input_file.is_open()) {
		throw std::runtime_error("Cannot open input_file.");
	}
	if (getline(input_file, total_line)) {}
	else {
		if (input_file.eof())
			throw std::runtime_error("File empty.");
		else if (input_file.fail())
			throw std::runtime_error("Cannot read inputs files");
	}
	if (total_line != "date | value") {
		throw std::runtime_error("Invalid input file format.");
	}
	while (getline(input_file, total_line)) {
		pos = total_line.find('|');
		switch (pos != std::string::npos) {
			case 0:
				std::cout << total_line << " is an invalid format." << std::endl;
				break;
			case 1:
				input_date = total_line.substr(0, pos);
				input_value = total_line.substr(pos + 1);
				if (!strptime(input_date.c_str(), "%Y-%m-%d", &tm)) {
					std::cout << input_date <<" is an invalid time format." << std::endl;
				}
				input_value.erase(std::remove(input_value.begin(), input_value.end(), ' '), input_value.end());
				switch (containsOnlyDigits(input_value)){
					case 0:
						std::cout << input_date << ": Invalid price format." << std::endl;
						break;
					case 1:
						value = atof(input_value.c_str());
						if (!value && !containsOnlyZeros(input_value)){
							throw std::runtime_error("Atof encountered an error.");
						}
						else if (value < 0 || value > 1000) {
							std::cout << "Value to estimate is out of range." << std::endl;
						}
						else {
							if (_db.find(input_date) != _db.end()) {
								std::cout << it->first << " => " << value << " = " <<  value * it->second << std::endl;
							}
							else {
								it = _db.lower_bound(input_date);
								if (it == _db.begin()) {
									std::cout << "The date is too older for referencing." << std::endl;
								}
								else {
									--it;
									std::cout << it->first << " => " << value << " = " <<  value * it->second << std::endl;
								}
							}
						}
				}
		}
	}
}



