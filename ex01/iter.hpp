#ifndef iter_hpp
# define iter_hpp
# include <string>
# include <iostream>

template<typename T>
void iter(T* array, int len, void (*f)(T&));

#endif
