#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
int main()
{
	const Animal* meta = new Animal();
	const WrongAnimal *animal = new WrongAnimal;
	const WrongAnimal *a = new WrongCat;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << a->getType() << " " << std::endl;
	animal->makeSound();
	a->makeSound();
	return 0;
	// const Animal animal;
	// const Dog  dog;
	// std::cout << dog.getType() << " " << std::endl;
	// animal.makeSound(); //will output the cat sound!
	// dog.makeSound();
}