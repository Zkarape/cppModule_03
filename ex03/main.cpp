#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    ClapTrap a("Navak1");
    FragTrap b("Navak2");
    ScavTrap b1("Navak2");
    DiamondTrap test1;
    DiamondTrap s("Zheno");
    DiamondTrap test;
    test = s;

    s.attack(b.getName());
    b.takeDamage(s.getAttackDamage());
    s.printPointInfo();
    s.whoAmI();
}