#include <iostream>
#include "Array.hpp"

template <typename T>
std::ostream& operator<<(std::ostream& o, Array<T> const& src) {
	for (int i = 0; i < src.size(); ++i) {
		o << src[i];
	}
	return o;
}

int main() {
	Array<int> arrEmpty;
	Array<int> arrNotEmpty(5);
	std::cout << "Empty array size - " << arrEmpty.size() << std::endl;
	std::cout << "Not empty array size - " << arrNotEmpty.size() << std::endl;
	try {
		std::cout << "Trying to add an item to an empty array\n";
		arrEmpty[0] = 4;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "Trying to add an item to an not empty array, but out of limits\n";
		arrEmpty[5] = 4;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "Trying to add an items to an not empty array\n";
	for (int i = 0; i < arrNotEmpty.size(); ++i) {
		arrNotEmpty[i] = i;
		std::cout << arrNotEmpty[i];
	}
	std::cout << std::endl;
	std::cout << "Now lets copy...\n";
	Array<int> copyArr(arrNotEmpty);
	std::cout << "So we have:\n";
	std::cout << "Original array: ";
	std::cout << arrNotEmpty << std::endl;
	std::cout << "Copy array: ";
	std::cout << copyArr << std::endl;
	std::cout << "Lets change copy array!\n";
	for (int i = 0; i < copyArr.size(); i++) {
		copyArr[i] = 0;
	}
	std::cout << "Check again!\n";
	std::cout << "Original array: ";
	std::cout << arrNotEmpty << std::endl;
	std::cout << "Copy array: ";
	std::cout << copyArr << std::endl;
	std::cout << "Okay, lets check '='\n";
	copyArr = arrEmpty;
	std::cout << copyArr.size() << std::endl;
	std::cout << "====================================\n";
	Array<std::string> stringArr(5);
	for (int i = 0; i < stringArr.size(); ++i) {
		stringArr[i] = "Hello!";
	}
	std::cout << stringArr << std::endl;
	return 0;
}
