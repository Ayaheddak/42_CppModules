#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Default Constructor Dog called" << std::endl;
    _type = "Dog";
}

Dog::Dog(std::string type):Animal(type)
{
    std::cout << "Dog Constructor called" << std::endl;
}

Dog::Dog(const Dog& copy)
{
    std::cout << "Copy Constructor Dog Called" << std::endl;
    _type = copy._type;
}

Dog& Dog::operator= (Dog& obj)
{
    _type =  obj.getType();
    return *this;
}

Dog::~Dog(void)
{
    std::cout << "Dog Deconstructor Called" << std::endl;
}

void Dog::makeSound()const
{
    std::cout << "HaaawHaaaaw ^^" << std::endl;
}