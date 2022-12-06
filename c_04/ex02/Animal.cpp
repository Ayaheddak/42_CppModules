#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Default Constructor Animal called" << std::endl;
    _type = "Animal";
}

Animal::Animal(std::string type):_type(type)
{
    std::cout << "Animal Constructor called" << std::endl;
}

Animal::Animal(const Animal& copy)
{
    std::cout << "Copy Constructor Animal Called" << std::endl;
    _type = copy._type;
}

Animal& Animal::operator = (Animal& obj)
{
    _type =  obj.getType();
    return *this;
}

Animal::~Animal(void)
{
    std::cout << "Animal Deconstructor Called" << std::endl;
}

void    Animal::setType(std::string type)
{
    _type = type;
    return ;
}

std::string Animal::getType()const
{
    return (_type);
}
