//
// Created by casubmar on 07.12.2020.
//

#ifndef EX00_WHATEVER_HPP
#define EX00_WHATEVER_HPP

template <typename T>
void swap(T& lhs, T& rhs) {
	T temp(rhs);
	rhs = lhs;
	lhs = temp;
}

template <typename T>
const T& min(T const& lhs, T const& rhs) {
	return rhs <= lhs ? rhs : lhs;
}

template <typename T>
const T& max(T const& lhs, T const& rhs) {
	return rhs >= lhs ? rhs : lhs;
}

#endif //EX00_WHATEVER_HPP
