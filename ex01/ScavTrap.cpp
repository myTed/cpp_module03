#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap()
: ClapTrap(){
	std::cout << "Defualt Derived Constructor called!\n";
	setHitPoint(100);
	setEnergyPoint(50);
	setAttackDamage(20);
}

ScavTrap::ScavTrap(const std::string& name)
: ClapTrap(name)
{
	std::cout << "Non Default Derived Constructor called\n";
	setHitPoint(100);
	setEnergyPoint(50);
	setAttackDamage(20);
}

ScavTrap::ScavTrap(const ScavTrap& rScav)
	:ClapTrap(rScav)
{
	std::cout << "Derived Copy Constructor called\n";	
}

ScavTrap::~ScavTrap()
{
	std::cout << "Derived Deconstructor called\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rScav)
{
	std::cout << "Derived Copy assignment operator called\n";
	ClapTrap::operator=(rScav);
	return (*this);
}
	
void	ScavTrap::guardGate()
{
	std::cout << "I'm gate Mode\n";
}
