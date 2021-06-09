#ifndef Array_hpp
# define Array_hpp
# include <exception>
# include <iostream>

template<typename T>
class Array {

	public:
		T* array;

		Array() {
			array = NULL;
			_lenght = 0;
		}

		Array(unsigned int n) {
			if (n == 0) {
				array = NULL;
				_lenght = 0;
			} else {
				_lenght = n;
				array = new T[_lenght];
				for (int i = 0; i < _lenght; i++) {
					array[i] = 0;
				}
			}
		}

		Array(const Array& other) {
			*this = other;
		}

		Array& operator =(const Array& other) {
			if (this->_lenght) {
				delete [] array;
			}
			this->_lenght = other._lenght;
			this->array = new T[this->_lenght];
			for (int i = 0; i < _lenght; i++) {
				this->array[i] = other.array[i];
			}
			return (*this);
		}

		~Array() {
			if (_lenght) {
				delete [] array;
			}
		}

		T& operator[](int n) {
			if (0 <= n && n < _lenght) {
				return array[n];
			} else {
				throw std::exception();
			}
		}

		const T& operator[](int n) const {
			if (0 <= n && n < _lenght) {
				return array[n];
			} else {
				throw std::exception();
			}
		}

		int size() const {
			return _lenght;
		}

	private:
		int _lenght;
};

#endif
