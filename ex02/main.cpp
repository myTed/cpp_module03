#include "ScavTrap.hpp"
#include "FragTrap.hpp"

#include <iostream>

int	main(void)
{
	ClapTrap	kyolee1("kyolee1");
	ScavTrap	kyolee2("kyolee2");
	FragTrap	kyolee3("kyolee3");

	kyolee1.printInfo();
	kyolee2.printInfo();
	kyolee3.printInfo();	
	
	kyolee3.highFiveGuys();
	return (0);
}
