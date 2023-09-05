#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap a("Navak1");
    ClapTrap b("Navak2");
    ScavTrap s("Zheno");

    a.attack(b.getName());
    b.takeDamage(a.getAttackDamage());
    b.beRepaired(10);
    b.printPointInfo();
    s.attack(b.getName());
    s.printPointInfo();
}