#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Default Constructor Cat called" << std::endl;
    _type = "Cat";
    _brain = new Brain();
}

Cat::Cat(std::string type)//
{
    std::cout << "Cat Constructor called" << std::endl;
    _type = type;
}

Cat::Cat(const Cat& copy)
{
    std::cout << "Copy Constructor Cat Called" << std::endl;
    _type = copy._type;
    _brain = new Brain();
}

Cat& Cat::operator = (Cat& obj)
{
    _type =  obj.getType();
    _brain = new Brain();
    return *this;
}

Cat::~Cat(void)
{
    std::cout << "Cat Deconstructor Called" << std::endl;
    delete (_brain);
}

void Cat::makeSound()const
{
    std::cout << "Meeeeeooooow " << std::endl;
}