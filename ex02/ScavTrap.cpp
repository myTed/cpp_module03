#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap()
: ClapTrap("null", 100, 50, 20)
{
	std::cout << "Defualt Derived Constructor called!\n";
}

ScavTrap::ScavTrap(const std::string& name)
: ClapTrap(name, 100, 50, 20)
{
	std::cout << "Non Default Derived Constructor called\n";
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
