#ifndef _SCAVTRAP_HPP
#define _SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(const std::string& name);
	ScavTrap(const ScavTrap& rScav);
	~ScavTrap();
	ScavTrap& operator=(const ScavTrap& rScav);	
	
	void	guardGate(void);
};

#endif

