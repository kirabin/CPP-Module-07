#ifndef iter_hpp
# define iter_hpp
# include <string>
# include <iostream>

template<typename T>
void iter(T* array, int len, void (*f)(T&));

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

#endif
