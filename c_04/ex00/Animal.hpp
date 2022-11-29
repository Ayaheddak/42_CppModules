#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <string>
class Animal
{
    protected :
        std::string _type;
    public :
        Animal();
        Animal(std::string type);
        Animal(const Animal& copy);
        Animal& operator= (Animal& obj);
        void    setType(std::string type);
        std::string getType() const;
        ~Animal(void);
        virtual void    makeSound()const;
};
#endif