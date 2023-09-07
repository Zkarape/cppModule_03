#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap a("Navak1");
    ClapTrap b("Navak2");
    ScavTrap s("Zheno");

    s.attack(b.getName());
    b.takeDamage(s.getAttackDamage());
    s.printPointInfo();
    s.guardGate();
}