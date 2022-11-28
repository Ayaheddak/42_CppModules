#include "FragTrap.hpp"
int main ()
{
    FragTrap c1("ayaya");
    FragTrap c2 = c1;

    c2.SetName("sousou");
    std::cout << c1.GetHitPoint() << std::endl;
    std::cout << c1.GetAttack() << std::endl;
    std::cout << c1.GetEnergy() << std::endl;

    c1.attack(c2.GetName());
    std::cout << c1.GetHitPoint() << std::endl;
    std::cout << c1.GetEnergy() << std::endl;
    c1.takeDamage(5);
    c1.attack(c2.GetName());
    std::cout << c1.GetHitPoint() << std::endl;
    std::cout << c1.GetEnergy() << std::endl;
    c1.takeDamage(5);
    c1.beRepaired(4);
    c1.highFivesGuys();
}