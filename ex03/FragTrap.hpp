#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap();
    FragTrap(const std::string &);
    FragTrap(const FragTrap &);
    FragTrap& operator=(const FragTrap &);
    const std::string &getName() const;
    const int &getAttackDamage() const;
    void printPointInfo() const;
    void highFivesGuys(void);
    ~FragTrap();
};

#endif