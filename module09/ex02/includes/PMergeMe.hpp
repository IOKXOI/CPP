#pragma once

#include <queue>
#include <iostream>
#include <stack>
#include <set>
#include <cerrno>
#include <utility>
#include <ctime>

class FordJohnson {
	private:
		std::deque<std::pair<int, int> >	_deque;
		std::vector<std::pair<int, int> >	_vector;
		int									_arg_number;
		double								_time_vector;
		double								_time_deque;

	public:
								void					print_before(const char **argv);
								void					print_vector_time();
								void					print_deque_time();
								void					insertion_sort_vector(std::vector<int> &final_container,std::vector<std::pair<int, int> > &ex_container);
								void					insertion_sort_deque(std::deque<int> &final_container,std::deque<std::pair<int, int> > &ex_container);
								void					print_after_vector(std::vector<int> &container);
								void					print_after_deque(std::deque<int> &container);
		template <typename T>	void					merge_sort(T &container, int start_index, int end_index);
		template <typename T>	void					sort(T &container, int start_index, int mid, int end_index);
								bool					fill_container_vector(std::vector<std::pair<int, int > > &container, const char **argv);
								bool					fill_container_deque(std::deque<std::pair<int, int > > &deque, const char **argv);
								bool					vector(int argc, const char **argv);
								bool					deque(int argc, const char **argv);
		template <typename T>	int						binary_search(T &final_container, int value, int start_index, int end_index);
								long					convert_arg_to_int(const char *arg);
								std::vector<int>		create_final_vector();
								std::deque<int>			create_final_deque();
};