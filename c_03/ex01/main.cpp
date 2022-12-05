#include "ScavTrap.hpp"

int main ()
{
    ScavTrap c1("ayaya");
    ScavTrap c2(c1);

    c2.SetName("sousou");
    c1.attack(c2.GetName());
    c1.takeDamage(5);
    c1.attack(c2.GetName());
    c1.takeDamage(5);
    c1.beRepaired(4);
    c1.guardGate();
}