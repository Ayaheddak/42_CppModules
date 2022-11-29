#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat : public Animal
{
    public :
        Cat();
        Cat(std::string type);
        Cat(const Cat& copy);
        Cat& operator= (Cat& obj);
        ~Cat(void);
        virtual void    makeSound()const;
};

#endif