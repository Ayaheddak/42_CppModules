#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ScavTrap.hpp"
class FragTrap : public ClapTrap
{
    public :
        FragTrap();
        FragTrap(std::string name);
        FragTrap(FragTrap &copy);
        FragTrap& operator = (FragTrap& obj);
        ~FragTrap();
        void highFivesGuys(void);
};
#endif