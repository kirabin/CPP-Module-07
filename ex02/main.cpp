#include "Array.hpp"
#include <string>
#include <iostream>

int main()
{
	Array<int> arr(5);

	for (int i = 0; i < 5; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;

	try {
		std::cout << arr[1000];
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}



	return 0;
}
