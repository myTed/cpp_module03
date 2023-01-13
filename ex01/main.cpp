#include "ScavTrap.hpp"
#include <iostream>

int	main(void)
{
	ScavTrap 	kyolee("kyolee");
	ClapTrap	kyolee1;

	kyolee1.printInfo();
	kyolee.guardGate();
	kyolee.printInfo();
	kyolee.attack("kyolee2");
	/*
	ScavTrap 	kyolee2;
	ClapTrap 	kyolee3;

	kyolee.beRepaired(100);
	kyolee2 = kyolee;
	kyolee.printInfo();
	kyolee2.printInfo();
	
	kyolee3 = kyolee2;
	kyolee3.printInfo();

	ClapTrap	*pKyolee = new ScavTrap;
	pKyolee->printInfo();
	
	std::cout << "=============\n";
	delete pKyolee;
	*/
	return (0);
}
