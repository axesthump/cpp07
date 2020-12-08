#include <iostream>
#include "whatever.hpp"

int main() {
	{
		int a = 2;
		int b = 3;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
		std::cout << "========================================================\n";
	}
	{
		std::cout << "===check INT===\n";
		int a = 42;
		int b = 21;
		std::cout << "a - " << a << " b - " << b << std::endl;
		std::cout << "swap...\n";
		::swap(a, b);
		std::cout << "a - " << a << " b - " << b << std::endl;
		std::cout << "min(a, b) - " << ::min(a, b) << std::endl;
		std::cout << "max(a, b) - " << ::max(a, b) << std::endl;
	}
	{
		std::cout << "===check CHAR===\n";
		char a = 'a';
		char b = 'b';
		std::cout << "a - " << a << " b - " << b << std::endl;
		std::cout << "swap...\n";
		::swap(a, b);
		std::cout << "a - " << a << " b - " << b << std::endl;
		std::cout << "min(a, b) - " << ::min(a, b) << std::endl;
		std::cout << "max(a, b) - " << ::max(a, b) << std::endl;
	}
	{
		std::cout << "===check FLOAT===\n";
		float a = 21.21f;
		float b = 42.42f;
		std::cout << "a - " << a << " b - " << b << std::endl;
		std::cout << "swap...\n";
		::swap(a, b);
		std::cout << "a - " << a << " b - " << b << std::endl;
		std::cout << "min(a, b) - " << ::min(a, b) << std::endl;
		std::cout << "max(a, b) - " << ::max(a, b) << std::endl;
	}
	return 0;
}
