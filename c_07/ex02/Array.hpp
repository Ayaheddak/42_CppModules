#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
template <typename T>
class Array
{
	private :
		T	*_array;
		int	_size;
	public :
		Array(void);
		Array(unsigned int size);
		Array(const Array& copy);
		Array& operator= (const Array& obj);
		T&  operator[](int index)const;
		~Array(void);
		int	size(void);
		class out_of_range_Exception : public std::exception
		{
			public :
				const char * what (void) const throw();
		};
};

#endif