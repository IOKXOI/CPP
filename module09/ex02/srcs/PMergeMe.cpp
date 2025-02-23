#include <cstdlib>
#include <stdexcept>
#include <cstring>
#include <cerrno>
#include "PMergeMe.hpp"

/*Print the arguments*/
void	FordJohnson::print_before(const char **argv) {
	int i = 1;

	std::cout << "Before: ";
	while (argv[i]) {
		std::cout << argv[i] << " ";
		i++;
	}
	std::cout << std::endl;
}

/*Print the vector container content*/
void	FordJohnson::print_after_vector(std::vector<int> &container) {
	std::cout << "After: ";
	for (std::vector <int>::iterator it = container.begin(); it != container.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

/*Print the deque container content*/
void	FordJohnson::print_after_deque(std::deque<int> &container) {
	std::cout << "After: ";
	for (std::deque <int>::iterator it = container.begin(); it != container.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

/*Create the final vector container to insert the sorted sequences*/
std::vector<int>	FordJohnson::create_final_vector() {
	std::vector<int>	final_vector;

	final_vector.reserve(_arg_number);
	for (std::vector<std::pair<int, int> >::iterator it = _vector.begin(); it != _vector.end(); it++) {
		if (it->first != -1) {
			final_vector.push_back(it->second);
		}
	}
	return final_vector;
}

/*Create the final deque container to insert the sorted sequences*/
std::deque<int>	FordJohnson::create_final_deque() {
	std::deque<int>	final_deque;

	for (std::deque<std::pair<int, int> >::iterator it = _deque.begin(); it != _deque.end(); it++) {
		if (it->first != -1) {
			final_deque.push_back(it->second);
		}
	}
	return final_deque;
}

/*Print the time between start and end of Ford-Johnson algorithm with std::vector*/
void	FordJohnson::print_vector_time() {
	std::cout << "Time to process a range of " << _arg_number << " elements with std::vector: " << _time_vector << " ms." << std::endl;;
}

/*Print the time between start and end of Ford-Johnson algorithm with std::deque*/
void	FordJohnson::print_deque_time() {
	std::cout << "Time to process a range of " << _arg_number << " elements with std::deque: " << _time_deque << " ms." << std::endl;;
}

/*Part of insertion algorithm to find the index where insert the number. The algoritm recursivly divise by 2 the container to find the index
where the numbers stop to be smaller into the already sorted final_container, containing the biggest numbers of pairs (pair.second)*/
template <typename T>
int	FordJohnson::binary_search(T &final_container, int value, int start_index, int end_index) {
	int	mid;

	mid = (start_index + end_index) / 2;
	if (start_index != end_index) {
		if (value < final_container[mid] || final_container[mid] == -1)
			return (binary_search(final_container, value, start_index, mid));
		else
			return (binary_search(final_container, value, mid + 1, end_index));
	}
	return (start_index);
}

/*Insertion algoritm to insert smaller number of pairs (pairs.first) into highter */
void	FordJohnson::insertion_sort_vector(std::vector<int> &final_container, std::vector<std::pair<int, int> > &ex_container) {
	int index_binary;
	for (std::vector<std::pair<int, int> >::iterator it = ex_container.begin(); it != ex_container.end(); it++) {
		if (it->first != -1) {
			index_binary = binary_search(final_container, it->first, 0, final_container.size() - 1);
			final_container.insert(final_container.begin() + index_binary, it->first);
		}
	}
}

/*Insertion algoritm to insert smaller number of pairs (pairs.first) into highter */
void	FordJohnson::insertion_sort_deque(std::deque<int> &final_container,std::deque<std::pair<int, int> > &ex_container) {
	int index_binary;

	for (std::deque<std::pair<int, int> >::iterator it = ex_container.begin(); it != ex_container.end(); it++) {
		if (it->first != -1) {
			index_binary = binary_search(final_container, it->first, 0, final_container.size() - 1);
			//std::cout << "index to place = " << index_binary << std::endl << "size = " << final_container.size() <<std::endl << "value = " << it->first << std::endl <<std::endl;
			final_container.insert(final_container.begin() + index_binary, it->first);
			//print_after(final_container);
		}
	}
}

/*Merge algoritm to sort*/
template <typename T>
void	FordJohnson::sort(T &container, int start_index, int mid, int end_index) {
	int inferior_array_size = mid - start_index + 1;
	int superior_array_size = end_index - mid;
	int inferior_index = 0;
	int superior_index = 0;
	std::vector<int> tmp_inferior(inferior_array_size);
	std::vector<int> tmp_superior(superior_array_size);

	for (int i = 0; i < inferior_array_size; i++) {
		tmp_inferior[i] = container[start_index + i].second;
	}
	for (int i = 0; i < superior_array_size; i++) {
		tmp_superior[i] = container[mid + 1 + i].second;
	}
	while (inferior_index < inferior_array_size && superior_index < superior_array_size) {
		if (tmp_inferior[inferior_index] <= tmp_superior[superior_index]) {
			container[start_index].second = tmp_inferior[inferior_index];
			inferior_index++;
		} else {
			container[start_index].second = tmp_superior[superior_index];
			superior_index++;
		}
		start_index++;
	}
	int merge_index = start_index;
	while (inferior_index < inferior_array_size) {
		container[merge_index].second = tmp_inferior[inferior_index];
		inferior_index++;
		merge_index++;
	}
	while (superior_index < superior_array_size) {
		container[merge_index].second = tmp_superior[superior_index];
		superior_index++;
		merge_index++;
	}
	//print_vector_pair(container);
}

/*Call recursively merge_sort to sort highter number of pairs(pairs.second)*/
template <typename T>
void	FordJohnson::merge_sort(T &container, int start_index, int end_index) {
	int	mid;

	mid = (start_index + end_index) / 2;
	if (start_index < end_index) {
		merge_sort(container, start_index, mid);
		merge_sort(container, mid + 1, end_index);
	sort(container, start_index, mid, end_index);
	}
}

/*Using strtol to convert args to int*/
long	FordJohnson::convert_arg_to_int(const char *arg) {
	char	*end_ptr;

	for (int i = 0; arg[i]; i++) {
		if (arg[i] < '0' || arg[i] > '9')
			throw std::invalid_argument("Invalid input argument.");
	}
	long converted = strtol(arg, &end_ptr, 10);
	if (errno) {
		throw std::runtime_error(strerror(errno));
	}
	if (arg == end_ptr) {
		throw std::runtime_error("Strtol encoutered an error.");
	}
	if (*end_ptr != '\0') {
		throw std::invalid_argument("Invalid input argument.");
	}
	return (converted);
}

/*Fill a std::deque<std::pair> to sort argv by pair. Smaller numbers in pair.first*/
bool	FordJohnson::fill_container_deque(std::deque<std::pair<int, int > > &deque, const char **argv) {
	std::pair <int, int> pair;

	for (int i = 1; i <= _arg_number; i += 2) {
		try {
			pair.first = convert_arg_to_int(argv[i]);
		}
		catch(std::exception &e) {
			std::cerr << "Error: " << e.what() << std::endl;
			return 0;
		}
		if (i + 1  <= _arg_number) {
			try {
				pair.second = convert_arg_to_int(argv[i + 1]);
			}
			catch (std::exception &e) {
				std::cerr << "Error: " << e.what() << std::endl;
				return (0);
			}
		}
		else {
			pair.second = -1;
		}
		if (pair.first > pair.second) {
			std::swap(pair.first, pair.second);
		}
		deque.push_back(pair);
		// std::cout << "PAIR FIRST = " << pair.first << " PAIR SECOND = "  << pair.second << std::endl;
	}
	return (1);
}

/*Fill a std::vector<std::pair> to sort argv by pair. Smaller numbers in pair.first*/
bool	FordJohnson::fill_container_vector(std::vector<std::pair<int, int > > &vector, const char **argv) {
	std::pair <int, int> pair;

	if (_arg_number % 2 == 0)
		vector.reserve(_arg_number / 2);
	else {
		vector.reserve((_arg_number + 1) / 2);
	}
	for (int i = 1; i <= _arg_number; i += 2) {
		try {
			pair.first = convert_arg_to_int(argv[i]);
		}
		catch(std::exception &e) {
			std::cerr << "Error: " << e.what() << std::endl;
			return 0;
		}
		if (i + 1  <= _arg_number) {
			try {
				pair.second = convert_arg_to_int(argv[i + 1]);
			}
			catch (std::exception &e) {
				std::cerr << "Error: " << e.what() << std::endl;
				return (0);
			}
		}
		else {
			pair.second = -1;
		}
		if (pair.first > pair.second) {
			std::swap(pair.first, pair.second);
		}
		vector.push_back(pair);
		// std::cout << "PAIR FIRST = " << pair.first << " PAIR SECOND = "  << pair.second << std::endl;
	}
	return (1);
}

/*Using Ford-Johnson algoritm on std::vector container*/
bool	FordJohnson::vector(int argc, const char **argv) {
	std::clock_t	start_time_vector = std::clock();
	_arg_number = argc - 1;

	if (!fill_container_vector(_vector, argv))
		return (0);
	merge_sort(_vector, 0, _vector.size() - 1);
	// print_vector_pair(_vector);
	std::vector<int> final_vector = create_final_vector();
	insertion_sort_vector(final_vector, _vector);
	std::clock_t stop_time_vector = std::clock();
	_time_vector = ((double)stop_time_vector / CLOCKS_PER_SEC * 1000) - ((double)start_time_vector / CLOCKS_PER_SEC * 1000);
	//print_after_vector(final_vector);
	return (1);
}

/*Using Ford-Johnson algoritm on std::deque container*/
bool	FordJohnson::deque(int argc, const char **argv) {
	std::clock_t	start_time_deque = std::clock();
	_arg_number = argc - 1;

	if (!fill_container_deque(_deque, argv))
		return (0);
	merge_sort(_deque, 0, _deque.size() - 1);
	//print_deque_pair(_deque);
	std::deque<int> final_deque = create_final_deque();
	insertion_sort_deque(final_deque, _deque);
	std::clock_t stop_time_deque = std::clock();
	_time_deque = ((double)stop_time_deque * 1000 / CLOCKS_PER_SEC ) - ((double)start_time_deque * 1000/ CLOCKS_PER_SEC );
	print_after_deque(final_deque);
	return (1);
}