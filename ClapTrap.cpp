#include "ClapTrap.hpp"

ClapTrap::ClapTrap() 
{
    std::cout << "ClapTrap Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name)
{
    std::cout << "ClapTrap Parametrized Constructor called" << std::endl;
    _name = name;
    _hitPoints = 10;
    _energyPoints = 10;
    _AttackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    std::cout << "ClapTrap Copy Constructor called" << std::endl;
    *this = copy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &assign)
{
    std::cout << "ClapTrap Assignment operator called" << std::endl;
    _name = assign._name;
    _hitPoints = assign._hitPoints;
    _energyPoints = assign._energyPoints;
    _AttackDamage = assign._AttackDamage;
}

void ClapTrap::attack(const std::string &target)
{
    _hitPoints -= _AttackDamage;
    _energyPoints--;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    _hitPoints -= amount;
    _energyPoints--;
}

ClapTrap::~ClapTrap() {}
