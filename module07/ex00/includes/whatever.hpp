template <typename T>
void	swap (T &x, T &y) {
	T swp = x;
	x = y;
	y = swp;
};

template <typename T>
T	const &min (T &x, T &y) {
	if (x >= y) {
		return y;
	}
	else 
		return x;
};

template <typename T>
T	const &max (T &x, T &y) {
	if (x > y) {
		return x;
	}
	else 
		return y;
};
