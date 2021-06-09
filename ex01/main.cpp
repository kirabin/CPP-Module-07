#include "iter.hpp"

void square(int& a) {
	a = a * a;
}

void upper(std::string& s) {
	for (int i = 0; s[i] != '\0'; i++) {
		if ('a' <= s[i] && s[i] <= 'z') {
			s[i] = s[i] - 'a' + 'A';
		}
	}
}

int main()
{
	int numbers[] = {0, 1, 2, 3};
	std::string strings[] = {"a2s", "bAS2df", "1.aac", "dss"};

	std::cout << "numbers: ";
	print(numbers, 4, " ");
	std::cout  << "iterating...";
	iter(numbers, 4, square);
	std::cout << std::endl << "numbers: ";
	print(numbers, 4, " ");
	std::cout << std::endl;

	std::cout << "strings: ";
	print(strings, 4, " ");
	std::cout << "iterating...";
	iter(strings, 4, upper);
	std::cout << std::endl << "strings: ";
	print(strings, 4, " ");

	return 0;
}
