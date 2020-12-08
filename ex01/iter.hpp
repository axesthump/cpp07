//
// Created by casubmar on 07.12.2020.
//

#ifndef EX01_ITER_HPP
#define EX01_ITER_HPP

#endif //EX01_ITER_HPP

template <typename T>
void iter(T* addr, size_t len, void (*func)(T const& arg)) {
	for (size_t i = 0; i < len; ++i) {
		(*func)(addr[i]);
	}
}