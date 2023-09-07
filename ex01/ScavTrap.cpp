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

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
	this->_gateKeeper = copy._gateKeeper;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &assign)
{
	if (this != &assign) {
		std::cout << "ScavTrap Assignment operator called" << std::endl;
		_name = assign._name;
		_hitPoints = assign._hitPoints;
		_energyPoints = assign._energyPoints;
		_AttackDamage = assign._AttackDamage;
	}
	return (*this);
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
	else
		std::cout << "ScavTrap " << _name << " cannot be attacked, because it does not have hit points left!" << std::endl;
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