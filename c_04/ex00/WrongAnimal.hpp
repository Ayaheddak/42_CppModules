# ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>
#include <string>

class WrongAnimal
{
    protected:
        std::string _type;
    public:
        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(const WrongAnimal& copyl);
        WrongAnimal& operator= (WrongAnimal& obj);
        ~WrongAnimal();
        std::string getType( void ) const;
        void    setType(std::string type);
        void    makeSound( void ) const;
};
#endif