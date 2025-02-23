#pragma once
#include <iostream>
#include <map>


class Exchange {
	private:
	
	public:
		std::map<std::string, float> _db;
		bool	containsOnlyDigits(const std::string& str);
		bool	containsOnlyZeros(const std::string& str);
		void	parse_file(const char* filename);
		void	fill_db(std::ifstream &csv_file);

		void	convert(const char* input);

};