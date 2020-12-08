#include <iostream>
#include "iter.hpp"

template <typename T>
void print(T const& arg) {
	std::cout << arg << std::endl;
}

int main() {
	::iter("Hello world!", 12, print);
	int nums[5] = {1, 2, 3, 4, 5};
	::iter(nums, 5, print);
	return 0;
}
