#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap()
: ClapTrap("null", 100, 50 , 20)
{
	std::cout << "Scav Defualt Derived Constructor called!\n";
}

ScavTrap::ScavTrap(const std::string& name)
: ClapTrap(name, 100, 50 , 20)
{
	std::cout << "Scav Non Default Derived Constructor called\n";
}

ScavTrap::ScavTrap(const ScavTrap& rScav)
	:ClapTrap(rScav)
{
	std::cout << "Scav Derived Copy Constructor called\n";	
}

ScavTrap::~ScavTrap()
{
	std::cout << "Scav Derived Deconstructor called\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rScav)
{
	std::cout << "Scav Derived Copy assignment operator called\n";
	ClapTrap::operator=(rScav);
	return (*this);
}
	
void	ScavTrap::guardGate()
{
	std::cout << "Scav I'm gate Mode\n";
}

void	ScavTrap::attack(const std::string& target)
{
	if (getEnergyPoint() == 0)
	{
		std::cout << "ScavTrap " << getName() << " attacks Failed\n";
		return ;
	}
	setEnergyPoint(getEnergyPoint() - 1);
	std::cout << "ScavTrap " << getName() << " attacks " << target
			<< ", causing " << getAttackDamage() << " points of damage!\n";
}
