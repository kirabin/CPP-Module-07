#include "whatever.hpp"

int main()
{
	int a = 1;
	int b = 2;
	std::cout << "(a, b) = " << a << " " << b << std::endl;
	swap(a, b);
	std::cout << "swapping..." << std::endl;
	std::cout << "(a, b) = " << a << " " << b << std::endl;
	std::cout << "min(a, b) = " << min(a, b) << std::endl;
	std::cout << "max(a, b) = " << max(a, b) << std::endl << std::endl;

	char c = 'A';
	char d = 'C';
	std::cout << "(c, d) = " << c << " " << d << std::endl;
	swap(c, d);
	std::cout << "swapping..." << std::endl;
	std::cout << "(c, d) = " << c << " " << d << std::endl;
	std::cout << "min(c, d) = " << min(c, d) << std::endl;
	std::cout << "max(c, d) = " << max(c, d) << std::endl;

	return 0;
}
