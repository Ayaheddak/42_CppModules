# ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
#include <string>

class ClapTrap
{
    private :
        std::string _Name;
        unsigned int _HitPoint;
        unsigned int _Energy;
        unsigned int _Attack;
    
    public :
        ClapTrap(std::string name);
        ClapTrap(ClapTrap &copy);
        ClapTrap& operator =(ClapTrap& obj);
        ~ClapTrap(void);

        void    SetName(std::string N);   
        void    SetHitPoint(unsigned int Hp);
        void    SetEnergy(unsigned int En);
        void    SetAttack(unsigned int A);
    
        std::string     GetName();
        unsigned int    GetHitPoint();
        unsigned int    GetEnergy();
        unsigned int    GetAttack();

        void    beRepaired(unsigned int amount);
        void    takeDamage(unsigned int amount);
        void    attack(const std::string& target);
   
};
#endif