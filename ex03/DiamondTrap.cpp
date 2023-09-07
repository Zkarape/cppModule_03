#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap()
{
    this->_name = "DefaultDiamond";
    ClapTrap::_name = "DefaultDiamond" + std::string("_clap_name");
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_AttackDamage = FragTrap::_AttackDamage;
    this->_hitPoints = FragTrap::_hitPoints;
	std::cout << "DiamondTrap Default Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name")
{
	std::cout << "DiamondTrap Parametrized Constructor called" << std::endl;
    this->_name = name;
    this->_AttackDamage = FragTrap::_AttackDamage;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_hitPoints = FragTrap::_hitPoints;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
	_name = copy._name;
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &assign)
{
	if (this != &assign)
	{
		FragTrap::operator=(assign);
		_name = assign._name;
		std::cout << "DiamondTrap Assignment operator called" << std::endl;
	}
	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "Hello i am a DiamondTrap named " << this->_name <<
	" and my base ClapTrap is " << ClapTrap::_name << "." <<
	std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}