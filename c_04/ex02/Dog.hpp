#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"
class Dog : public Animal
{
	private :
        Brain* _brain;
    public :
        Dog();
        Dog(std::string type);
        Dog(const Dog& copy);
        Dog& operator= (const Dog& obj);
        ~Dog(void);
        void makeSound()const;
		Brain *getBrain(void)const;
};
#endif