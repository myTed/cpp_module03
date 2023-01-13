#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap()
: ClapTrap("null_clap_name")
{
	_name = "null";
	FragTrap tmpFrag;
	ScavTrap tmpScav;
	setHitPoint(tmpFrag.getHitPoint());
	setEnergyPoint(tmpScav.getEnergyPoint());
	setAttackDamage(tmpFrag.getAttackDamage());
}

DiamondTrap::DiamondTrap(const std::string& name)
: ClapTrap(name + "_clap_name") 
{
	_name = name;
	FragTrap	tmpFrag;
	ScavTrap	tmpScav;
	setHitPoint(tmpFrag.getHitPoint());
	setEnergyPoint(tmpScav.getEnergyPoint());
	setAttackDamage(tmpFrag.getAttackDamage());
}
	
DiamondTrap::DiamondTrap(const DiamondTrap& rDia)
: ClapTrap(rDia), FragTrap(rDia), ScavTrap(rDia)
{
	_name = rDia._name;
	std::cout << "Diamond Derived Copy constructor called\n";
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Diamond Derived Deconstructor called\n";
}
	
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& rDia)
{
	ClapTrap::operator=(rDia);
	_name = rDia._name;
	std::cout << "Diamond Derived Copy assignment operator called\n";
	return (*this);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "my_name : " << _name << std::endl;
	printInfo();
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}
