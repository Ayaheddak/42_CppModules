#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Default Constructor WrongAnimal's called" << std::endl;
    _type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(std::string type):_type(type)
{
    std::cout << "WrongAnimal Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
    std::cout << "Copy Constructor WrongAnimal Called" << std::endl;
    _type = copy._type;
}

WrongAnimal& WrongAnimal::operator = (WrongAnimal& obj)
{
    _type =  obj.getType();
    return *this;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal Deconstructor Called" << std::endl;
}

void    WrongAnimal::setType(std::string type)
{
    _type = type;
    return ;
}

std::string WrongAnimal::getType()const
{
    return (_type);
}

void    WrongAnimal::makeSound()const
{
    std::cout << "wrong animal (i cant make sound ) !!!! " << std::endl;
}