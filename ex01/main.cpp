#include "iter.hpp"

template<typename T>
void iter(T* array, int len, void (*f)(T&)) {
	for (int i = 0; i < len; i++) {
		f(array[i]);
	}
}

template<typename T>
void print(T* array, int len, std::string sep) {
	for (int i = 0; i < len; i++) {
		std::cout << array[i];
		if (i != len - 1)
			std::cout << sep;
	}
	std::cout << std::endl;
}

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

	print(numbers, 4, " ");
	iter(numbers, 4, square);
	print(numbers, 4, " ");

	print(strings, 4, " ");
	iter(strings, 4, upper);
	print(strings, 4, " ");


	return 0;
}
