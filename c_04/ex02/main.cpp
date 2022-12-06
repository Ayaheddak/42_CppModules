#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
int main()
{
	const Cat c1;
	const Dog d1;

	c1.makeSound();
	d1.makeSound();
    return 0;
}