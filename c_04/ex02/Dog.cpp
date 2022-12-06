#include "Dog.hpp"
Dog::Dog()
{
    std::cout << "Default Constructor Dog called" << std::endl;
    this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(std::string type)
{
    std::cout << "Dog Constructor called" << std::endl;
    _type = type;
}

Dog::Dog(const Dog& copy)
{
    std::cout << "Copy Constructor Dog Called" << std::endl;
    *this = copy;
}

Dog& Dog::operator= (const Dog& obj)
{
	this->_type = obj.getType();
	this->_brain = new Brain();
	for(int i = 0; i < 100; i++)
		this->_brain->setIdeas(i, obj._brain->getIdeas(i));
    return *this;
}

Dog::~Dog(void)
{
    std::cout << "Dog Deconstructor Called" << std::endl;
	delete (this->_brain);
}

void Dog::makeSound()const
{
    std::cout << "HaaawHaaaaw " << std::endl;
}

Brain *Dog::getBrain(void)const
{
	return (this->_brain);
}