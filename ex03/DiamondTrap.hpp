#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap
{
private:
    std::string name;
public:
    DiamondTrap(/* args */);
    ~DiamondTrap();
};

#endif