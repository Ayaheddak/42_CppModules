#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"
class Cat : public Animal
{
    private :
        Brain* _brain;
    public :
        Cat();
        Cat(std::string type);
        Cat(const Cat& copy);
        Cat& operator= (const Cat& obj);
        ~Cat(void);
        void    makeSound()const;
        Brain* getBrain(void)const;
};

#endif