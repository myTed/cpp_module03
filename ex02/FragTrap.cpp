#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap()
: ClapTrap()
{
	std::cout << "Default Derived Constructor called!\n";
	setHitPoint(100);
	setEnergyPoint(100);
	setAttackDamage(30);
}

FragTrap::FragTrap(const std::string& name)
: ClapTrap(name)
{
	std::cout <<"Non Default Derived Constructor called\n";
	setHitPoint(100);
	setEnergyPoint(100);
	setAttackDamage(30);
}

FragTrap::FragTrap(const FragTrap& rFrag)
: ClapTrap(rFrag)
{
	std::cout << "Derived Copy Constructor called\n";
}

FragTrap::~FragTrap()
{
	std::cout << "Derived Deconstructor called\n";
}
	
FragTrap& FragTrap::operator=(const FragTrap& rFrag)
{
	std::cout << "Derived Copy assignment operator called\n";
	ClapTrap::operator=(rFrag);
	return (*this);
}

void	FragTrap::highFiveGuys(void)
{
	std::cout << "a Positive High Five request!\n";
}

