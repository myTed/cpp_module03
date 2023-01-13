#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap()
: ClapTrap("null", 100, 100, 30)
{
	std::cout << "Frag Default Derived Constructor called!\n";
}

FragTrap::FragTrap(const std::string& name)
: ClapTrap(name, 100, 100, 30)
{
	std::cout <<"Frag Non Default Derived Constructor called\n";
}

FragTrap::FragTrap(const FragTrap& rFrag)
: ClapTrap(rFrag)
{
	std::cout << "Frag Derived Copy Constructor called\n";
}

FragTrap::~FragTrap()
{
	std::cout << "Frag Derived Deconstructor called\n";
}
	
FragTrap& FragTrap::operator=(const FragTrap& rFrag)
{
	std::cout << "Frag Derived Copy assignment operator called\n";
	ClapTrap::operator=(rFrag);
	return (*this);
}

void	FragTrap::highFiveGuys(void)
{
	std::cout << "Frag a Positive High Five request!\n";
}
