#pragma once

template <typename T>
class Container {
	public:
		Container();
		Container(const Container &toCopy);
		Container &operator=(const Container &toCopy);
		~Container();
	
	private:
		T<int>	Array(10);
}