#include "DiamondTrap.hpp"
#include <iostream>

int	main(void)
{
	DiamondTrap kyolee("kyoee");	
	DiamondTrap kyolee2;

	kyolee.whoAmI();
	kyolee2 = kyolee;

	kyolee2.whoAmI();
	kyolee2.highFiveGuys();
	kyolee2.guardGate();
	kyolee2.attack(std::string("kyolee2~~~"));

	return (0);
}
