#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    this->_AttackDamage = 20;
    this->_energyPoints = 50;
    this->_hitPoints = 100;
    this->_gateKeeper = 0;
	std::cout << "ScavTrap Default Constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	std::cout << "ScavTrap Parametrized Constructor called" << std::endl;
    this->_AttackDamage = 20;
    this->_energyPoints = 50;
    this->_hitPoints = 100;
    this->_gateKeeper = 0;
}

ScavTrap::ScavTrap(const ScavTrap &copy):ClapTrap(copy)
{
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &assign)
{
	std::cout << "ScavTrap Assignment operator called" << std::endl;
	_name = assign._name;
	_hitPoints = assign._hitPoints;
	_energyPoints = assign._energyPoints;
	_AttackDamage = assign._AttackDamage;
	return (*this);
}

const std::string &ScavTrap::getName() const
{
	return (_name);
}

const int &ScavTrap::getAttackDamage() const
{
	return (_AttackDamage);
}

void ScavTrap::printPointInfo() const
{
	std::cout << this->_name << "'s hit points are " << this->_hitPoints << std::endl;
	std::cout << this->_name << "'s energy points are " << this->_energyPoints << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _AttackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	}
	else if (_energyPoints == 0)
		std::cout << "ScavTrap " << _name << " cannot be attacked, because it does not have energy points left!" << std::endl;
	else if (_hitPoints == 0)
		std::cout << "ScavTrap " << _name << " cannot be attacked, because it does not have hit points left!" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints > 0 && _hitPoints > 0) // do I need to check for _hitPoint + amount <= 10
	{
		std::cout << "ScavTrap " << _name << " is being repaired and getting " << amount << " points back!" << std::endl;
		_hitPoints += amount;
		_energyPoints--;
	}
	else if (_energyPoints == 0)
		std::cout << "ScavTrap " << _name << " cannot be repaired, because it does not have energy points left!" << std::endl;
	else if (_hitPoints == 0)
		std::cout << "ScavTrap " << _name << " cannot be attacked, because it does not have hit points left!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints > _AttackDamage) // && _energyPoints > 0
	{
		std::cout << "ScavTrap " << _name << " was attacked and lost " << _AttackDamage << " points!" << std::endl;
		_hitPoints -= _AttackDamage;
	}
	else if (_hitPoints == 0)
		std::cout << "ScavTrap " << _name << " is already dead, stop it!!!" << std::endl;
}

void ScavTrap::guardGate()
{
	if (this->_gateKeeper == false)
	{
		this->_gateKeeper = true;
		std::cout << "ScavTrap " << this->_name << " is now guarding the gate." << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->_name << " is already guarding the gate." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}