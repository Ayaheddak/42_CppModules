#include "ScavTrap.hpp"
ScavTrap::ScavTrap()
{
    std::cout << "Scavtrap Default Constructor called " << std::endl;
}
ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap Constructor with args called" << std::endl;
    _Name= name;
    _HitPoint = 100;
    _Energy = 50;
    _Attack = 20;
}

ScavTrap::ScavTrap(ScavTrap &copy)
{
    std::cout << "Copy ScavTrap Constructor called" << std::endl;
    *this = copy;
}

ScavTrap& ScavTrap::operator = (ScavTrap& obj)
{
	std::cout << "Copy Scavtrap assignment operator called" << std::endl;
    _Name =  obj.GetName();
    _HitPoint = obj.GetHitPoint();
    _Energy  = obj.GetEnergy();
    _Attack = obj.GetAttack();
    return *this;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap Destructor is being deleted" << std::endl;
}

void    ScavTrap::attack(const std::string& target)
{
    std::cout << "ScavTrap "<< _Name << " attacks " << target << " causing " << _Attack << " points of damage! " << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode " << std::endl;
}