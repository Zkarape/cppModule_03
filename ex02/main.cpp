#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap a("Navak1");
    ClapTrap b("Navak2");
    FragTrap s("Zheno");

    s.attack(b.getName());
    b.takeDamage(s.getAttackDamage());
    s.printPointInfo();
    s.highFivesGuys();
}