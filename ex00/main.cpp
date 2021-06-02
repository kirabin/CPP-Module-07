#include "whatever.hpp"

template< typename T >
void swap(T& a, T& b) {
	T c;

	c = a;
	a = b;
	b = c;
}

template< typename T >
const T& min(const T& a, const T&b) {
	return a < b ? a : b;
}

template< typename T >
const T& max(const T& a, const T&b) {
	return a >= b ? a : b;
}

int main()
{
	{
		int a = 2;
		int b = 3;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl; std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl; std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1"; std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl; std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl; std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}

	int a = 1;
	int b = 2;
	std::cout << a << " " << b << std::endl;
	swap(a, b);
	std::cout << a << " " << b << std::endl;
	std::cout << min(a, b) << std::endl;
	std::cout << max(a, b) << std::endl << std::endl;

	char c = 'A';
	char d = 'C';
	std::cout << c << " " << d << std::endl;
	swap(c, d);
	std::cout << c << " " << d << std::endl;
	std::cout << min(c, d) << std::endl;
	std::cout << max(c, d) << std::endl;

	return 0;
}