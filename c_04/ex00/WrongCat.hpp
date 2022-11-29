# ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"
class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(std::string type);
        WrongCat(const WrongCat& copyl);
        WrongCat& operator= (WrongCat& obj);
        ~WrongCat();
        void    makeSound( void ) const;
};
#endif