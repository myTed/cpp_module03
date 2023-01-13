#include "ClapTrap.hpp"
#include <iostream>

int	main(void)
{
	ClapTrap	a;
	ClapTrap	b("kyolee");
	ClapTrap	c("kyolee2");


	std::cout << "===================\n";
	a.printInfo();
	b.printInfo();
	c.printInfo();
	std::cout << "====================\n";

	a.attack("kyolee");
	a.beRepaired(100);
	b.attack("kyolee2");
	b.printInfo();
	c.takeDamage(10);
	c.printInfo();
	//c.takeDamage(10);
	//c.printInfo();
	//c.takeDamage(4294967297);
	c.beRepaired(100);
	c.printInfo();
	c.beRepaired(1);
	c.printInfo();

	return (0);
}
