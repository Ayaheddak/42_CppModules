#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Default Constructor Cat called" << std::endl;
    this->_type = "Cat";
    this->_brain = new Brain();
}

Cat::Cat(std::string type)//
{
    std::cout << "Cat Constructor called" << std::endl;
    _type = type;
}

Cat::Cat(const Cat& copy)
{
    std::cout << "Copy Constructor Cat Called" << std::endl;
    *this = copy;
}

Cat& Cat::operator = (const Cat& obj)
{
    _type =  obj.getType();
	this->_brain = new Brain();
	for(int i = 0; i < 100; i++)
		this->_brain->setIdeas(i, obj._brain->getIdeas(i));
    return *this;
}

Cat::~Cat(void)
{
    std::cout << "Cat Deconstructor Called" << std::endl;
    delete (this->_brain);
}

void Cat::makeSound()const
{
    std::cout << "Meeeeeooooow " << std::endl;
}

Brain *Cat::getBrain(void)const
{
	return (this->_brain);
}