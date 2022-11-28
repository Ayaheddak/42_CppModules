#include "FragTrap.hpp"
FragTrap::FragTrap()
{
    std::cout << "FragTrap Default Constructor called " << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap Constructor called" << std::endl;
    _Name = name;
    _HitPoint = 100;
    _Energy = 100;
    _Attack = 30;
}

FragTrap::FragTrap(FragTrap &copy)
{
    std::cout << "Copy FragTrap Constructor called" << std::endl;
    _Name = copy._Name;
    _HitPoint = copy._HitPoint;
    _Energy = copy._Energy;
    _Attack = copy._Attack;
}

FragTrap& FragTrap::operator = (FragTrap& obj)
{
    _Name =  obj.GetName();
    _HitPoint = obj.GetHitPoint();
    _Energy  = obj.GetEnergy();
    _Attack = obj.GetAttack();
    return *this;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap Deconstructor called " << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "high Fives Guyyys !!!" << std::endl;
}