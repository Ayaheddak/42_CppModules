#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <vector>
class NotFoundException : public std::exception
{
	public :
		const char * what (void) const throw();
};

const char * NotFoundException::what (void) const throw()
{
	return (" Not foouuuund !! ");
}

template <typename T>
int easyfind(T container, int value)
{
	for (typename T::iterator it = container.begin(); it != container.end(); ++it) 
	{
    	if (*it == value) 
    	  return *it;
	}
	throw NotFoundException();

}
#endif

// he only difference between this implementation and the previous one is that the type of the iterator is explicitly specified using typename T::iterator instead of auto. This is necessary because the type of the iterator is not known at compile time, so we need to use a template type parameter to specify it.

// Here's an example of how the function could be used:


// This implementation of easyfind accepts a container of integers and an integer value as parameters. It iterates over the elements in the container and returns the first element that equals the given value. If no such element is found, it returns -1.

// You can use this function template with any container of integers, such as std::vector, std::list, or std::set. For example, you could call it like this: