//
// Created by casubmar on 07.12.2020.
//

#ifndef EX02_ARRAY_HPP
#define EX02_ARRAY_HPP

template <typename T>
class Array {
public:
	Array(): _size(0), _arr(0) {}
	Array(unsigned int n): _size(n) {
		this->_arr = new T[n];
	}
	Array(Array const& src): _size(src.size()) {
		if (this->_size)
			this->_arr = new T[this->_size];
		for (unsigned int i = 0; i < this->_size; ++i) {
			this->_arr[i] = src[i];
		}
	}
	Array& operator=(Array const& rhs) {
		if (this != &rhs) {
			delete [] this->_arr;
			this->_size = rhs.size();
			if (this->_size)
				this->_arr = new T[this->_size];
			for (unsigned int i = 0; i < this->_size; ++i) {
				this->_arr[i] = rhs[i];
			}
		}
		return *this;
	}
	~Array() {
		if (this->_size)
			delete [] this->_arr;
	}

	T& operator[](unsigned int index) {
		if (index >= this->_size) {
			throw OutOfTheLimitsException();
		}
		return this->_arr[index];
	}

	const T& operator[](unsigned int index) const {
		if (index >= this->_size) {
			throw OutOfTheLimitsException();
		}
		return this->_arr[index];
	}

	unsigned int size() const {
		return this->_size;
	}

	class OutOfTheLimitsException: public std::exception {
	public:
		virtual const char* what() const throw() {
			return "This element is out of the limits";
		}
	};


private:
	unsigned int 	_size;
	T*				_arr;
};

#endif //EX02_ARRAY_HPP
