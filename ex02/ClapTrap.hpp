#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <cmath>
#include <cstdio>
#include <stdbool.h>
#include <limits>

class ClapTrap
{
protected:
    std::string _name;
    unsigned int _hitPoints;
    unsigned int _energyPoints;
    unsigned int _AttackDamage;
public:
    ClapTrap();
    ClapTrap(const std::string &);
    ClapTrap(const ClapTrap &);
    ClapTrap& operator=(const ClapTrap &);
    const std::string &getName() const;
    const unsigned int &getAttackDamage() const;
    void printPointInfo() const;
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    ~ClapTrap();
};

#endif