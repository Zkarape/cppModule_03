#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Zhenya"), _hitPoints(10), _energyPoints(10), _AttackDamage(0)
{
	std::cout << "ClapTrap Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : _name(name), _hitPoints(10), _energyPoints(10), _AttackDamage(0)
{
	std::cout << "ClapTrap Parametrized Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "ClapTrap Copy Constructor called" << std::endl;
	*this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &assign)
{
	std::cout << "ClapTrap Assignment operator called" << std::endl;
	_name = assign._name;
	_hitPoints = assign._hitPoints;
	_energyPoints = assign._energyPoints;
	_AttackDamage = assign._AttackDamage;
	return (*this);
}

const std::string &ClapTrap::getName() const
{
	return (_name);
}

const unsigned int &ClapTrap::getAttackDamage() const
{
	return (_AttackDamage);
}

void ClapTrap::printPointInfo() const
{
	std::cout << this->_name << "'s hit points are " << this->_hitPoints << std::endl;
	std::cout << this->_name << "'s energy points are " << this->_energyPoints << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _AttackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	}
	else if (_hitPoints == 0)
		std::cout << "ClapTrap " << _name << " cannot be attacked, because it does not have hit points left!" << std::endl;
	else if (_energyPoints == 0)
		std::cout << "ClapTrap " << _name << " cannot be attacked, because it does not have energy points left!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints > 0 && _hitPoints > 0) // do I need to check for _hitPoint + amount <= 10
	{
		std::cout << "ClapTrap " << _name << " is being repaired and getting " << amount << " points back!" << std::endl;
		_hitPoints += amount;
		_energyPoints--;
	}
	else if (_hitPoints == 0)
		std::cout << "ClapTrap " << _name << " cannot be attacked, because it does not have hit points left!" << std::endl;
	else
		std::cout << "ClapTrap " << _name << " cannot be repaired, because it does not have energy points left!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints > amount && _energyPoints > 0)
	{
		std::cout << "ClapTrap " << _name << " was attacked and lost " << _AttackDamage << " points!" << std::endl;
		_hitPoints -= amount;
	}
	else if (_hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " is already dead, stop it!!!" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << _name << " has died, stop it!!!" << std::endl;
	}
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}
