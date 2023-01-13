#ifndef _DIAMONDTRAP_HPP
#define _DIAMONDTRAP_HPP
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string _name;
public:
	DiamondTrap();
	DiamondTrap(const std::string& name);
	DiamondTrap(const DiamondTrap& rDia);
	~DiamondTrap();
	DiamondTrap& operator=(const DiamondTrap& rDia);
	void 	whoAmI();
	void	attack(const std::string& target);
};

#endif

