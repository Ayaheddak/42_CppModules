#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
int main()
{
	// const Cat c1;
	// const Dog d1;
	Animal *a = new Cat();

	// c1.makeSound();
	// d1.makeSound();
	a->makeSound();
	delete a;
    return 0;
}