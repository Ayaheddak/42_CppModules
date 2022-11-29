#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "Default Constructor WrongCat called" << std::endl;
    _type = "Cat";
}

WrongCat::WrongCat(std::string type)
{
    std::cout << "WrongCat Constructor called" << std::endl;
    _type = type;
}

WrongCat::WrongCat(const WrongCat& copy)
{
    std::cout << "Copy Constructor WrongCat Called" << std::endl;
    _type = copy._type;
}

WrongCat& WrongCat::operator = (WrongCat& obj)
{
    _type =  obj.getType();
    return *this;
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat Deconstructor Called" << std::endl;
}

void    WrongCat::makeSound()const
{
    std::cout << "Meeooooow !!!! " << std::endl;
}