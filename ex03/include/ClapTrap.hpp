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
	ClapTrap(const std::string& name,
				unsigned int hitPoint,
				unsigned int energyPoint,
				unsigned int attackDamage);
	void			setName(const std::string& name);
	void			setHitPoint(unsigned int hitPoint);
	void			setEnergyPoint(unsigned int energyPoint);
	void			setAttackDamage(unsigned int attackDamage);
public:
	ClapTrap();
	ClapTrap(const std::string& name);
	~ClapTrap();
	ClapTrap(const ClapTrap& rClap);
	ClapTrap& operator=(const ClapTrap& rClap);
	std::string		getName() const;
	unsigned int	getHitPoint() const;
	unsigned int	getEnergyPoint() const;
	unsigned int	getAttackDamage() const;
	void			printInfo();
	void			attack(const std::string& target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
};
#endif

