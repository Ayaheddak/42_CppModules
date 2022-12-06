#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat : public Animal
{
    public :
        Cat();
        Cat(std::string type);
        Cat(const Cat& copy);
        Cat& operator= (const Cat& obj);
        ~Cat(void);
    	void    makeSound()const;
};

#endif