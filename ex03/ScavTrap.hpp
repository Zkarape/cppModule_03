#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
    bool _gateKeeper;
public:
    ScavTrap();
    ScavTrap(const std::string &);
    ScavTrap(const ScavTrap &);
    ScavTrap& operator=(const ScavTrap &);
    const std::string &getName() const;
    const int &getAttackDamage() const;
    void printPointInfo() const;
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void guardGate();
    ~ScavTrap();
};

#endif