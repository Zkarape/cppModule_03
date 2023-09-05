#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    this->_AttackDamage = 30;
    this->_energyPoints = 100;
    this->_hitPoints = 100;
	std::cout << "FragTrap Default Constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	std::cout << "FragTrap Parametrized Constructor called" << std::endl;
    this->_AttackDamage = 30;
    this->_energyPoints = 100;
    this->_hitPoints = 100;
}

FragTrap::FragTrap(const FragTrap &copy):ClapTrap(copy)
{
	std::cout << "FragTrap Copy Constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &assign)
{
	std::cout << "FragTrap Assignment operator called" << std::endl;
	_name = assign._name;
	_hitPoints = assign._hitPoints;
	_energyPoints = assign._energyPoints;
	_AttackDamage = assign._AttackDamage;
	return (*this);
}

const std::string &FragTrap::getName() const
{
	return (_name);
}

const int &FragTrap::getAttackDamage() const
{
	return (_AttackDamage);
}

void FragTrap::printPointInfo() const
{
	std::cout << this->_name << "'s hit points are " << this->_hitPoints << std::endl;
	std::cout << this->_name << "'s energy points are " << this->_energyPoints << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "I am kidding you, give high five!!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}