#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("Navak1");
    ClapTrap b("Navak2");

    a.attack(b.getName());
    b.takeDamage(a.getAttackDamage());
    a.printPointInfo();
}