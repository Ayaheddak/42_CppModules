#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Default Constructor Cat called" << std::endl;
    _type = "Cat";
}

Cat::Cat(std::string type):Animal(type)
{
    std::cout << "Cat Constructor called" << std::endl;
}

Cat::Cat(const Cat& copy)
{
    std::cout << "Copy Constructor Cat Called" << std::endl;
	*this = copy;
}

Cat& Cat::operator = (const Cat& obj)
{
    _type =  obj.getType();
    return *this;
}

Cat::~Cat(void)
{
    std::cout << "Cat Deconstructor Called" << std::endl;
}

void Cat::makeSound()const
{
    std::cout << "Meeeeeooooow  ^_^ " << std::endl;
}