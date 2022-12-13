#include "Array.hpp"
template <typename T>
Array<T>::Array(void)
{
	this->_array = NULL;
	this->size = 0;
}
template <typename T>
Array<T>::Array(unsigned int size)
{
	_size = size;
	_array = new T[_size];
}
template <typename T>
Array<T>::Array(const Array& copy)
{
	this->_size = 0;
	*this = copy;
}

template <typename T>
Array<T>& Array<T>::operator= (const Array& obj)
{
	if (this->_size > 0)
		delete[] this->_array;
	this->_size = 0;
	this->_array = new T[obj._size];
	while(this->_size < obj._size)
	{
		this->_array[this->_size] = obj._array[this->_size];
		this->_size++;
	}
	return (*this);
}

template <typename T>
Array<T>::~Array(void)
{
	delete[] _array;
}

template <typename T>
int	Array<T>::size(void)
{
	return (this->_size);
}

template <typename T>
const char * Array<T>::out_of_range_Exception::what (void) const throw()
{
	return ("The given index does not exist");
}

template <typename T>
T&  Array<T>::operator[](int index)const
{
	if (index >= this->_size || index < 0)
		throw out_of_range_Exception();
	else
		return (this->_array[index]);
}

