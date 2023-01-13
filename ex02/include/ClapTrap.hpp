#ifndef _CLAPTRAP_HPP
#define _CLAPTRAP_HPP
#include <string>



class	ClapTrap
{
private:
	std::string		_name;
	unsigned int	_hitPoint;
	unsigned int	_energyPoint;
	unsigned int	_attackDamage;
protected:
	void	setName(const std::string& name);
	void	setHitPoint(unsigned int hitPoint);
	void	setEnergyPoint(unsigned int energyPoint);
	void	setAttackDamage(unsigned int attackDamage);
public:
	ClapTrap();
	ClapTrap(const std::string& name);
	~ClapTrap();
	ClapTrap(const ClapTrap& rClap);
	ClapTrap& operator=(const ClapTrap& rClap);
	void	printInfo();
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};
#endif

