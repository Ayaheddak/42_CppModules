#include "Brain.hpp"
Brain::Brain()
{
    std::cout << "Default Constructor Brain called" << std::endl;
}

Brain::Brain(const Brain& copy)
{
    std::cout << "Copy Constructor Brain Called" << std::endl;
    *this = copy;
}

Brain& Brain::operator = (const Brain& obj)
{
    int i = 0;
    while (i < 100)
    {
        _ideas[i] = obj.getIdeas(i);
        i++;
    }
    return *this;
}

Brain::~Brain(void)
{
    std::cout << "Brain Deconstructor Called" << std::endl;
}

void    Brain::setIdeas(int i, std::string idea)
{
    _ideas[i] = idea;
}

std::string Brain::getIdeas(int i)const
{
    return (_ideas[i]);
}