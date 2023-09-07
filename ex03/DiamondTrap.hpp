#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
    std::string _name;
public:
    DiamondTrap();
    DiamondTrap(const std::string &name);
    DiamondTrap(const DiamondTrap &copy);
    DiamondTrap &operator=(const DiamondTrap &assign);
    using   ScavTrap::attack;
    using   FragTrap::_hitPoints;
    using   ScavTrap::_energyPoints;
    using   FragTrap::_AttackDamage;
    void whoAmI(void);
    ~DiamondTrap();
};

#endif