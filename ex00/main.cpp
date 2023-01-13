#include "ClapTrap.hpp"
#include <iostream>

int	main(void)
{
	ClapTrap	kNull;
	ClapTrap	kyolee1("kyolee1");
	ClapTrap	kyolee2("kyolee2");


	std::cout << "===================\n";
	kNull.printInfo();
	kyolee1.printInfo();
	kyolee2.printInfo();
	std::cout << "====================\n";

	kNull.attack("kyolee");
	kNull.beRepaired(100);
	kyolee1.attack("kyolee2");
	kyolee1.printInfo();
	kyolee2.takeDamage(10);
	kyolee2.printInfo();
	//c.takeDamage(10);
	//c.printInfo();
	//c.takeDamage(4294967297);
	kyolee2.beRepaired(100);
	kyolee2.printInfo();
	kyolee2.beRepaired(1);
	kyolee2.printInfo();

	return (0);
}
