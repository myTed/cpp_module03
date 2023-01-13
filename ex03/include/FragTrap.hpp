#ifndef _FRAGTRAP_HPP
#define	_FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
	FragTrap();
	FragTrap(const std::string& name);
	FragTrap(const FragTrap& rTrag);
	~FragTrap();
	FragTrap& operator=(const FragTrap& rFrag);
	
	void	highFiveGuys(void);
};

#endif
