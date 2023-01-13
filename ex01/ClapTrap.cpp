#include "ClapTrap.hpp"
#include <iostream>
#include <climits>

ClapTrap::ClapTrap()
{
	std::cout << "Default Constructor called!\n";
	_name = "null";
	_hitPoint = 10;
	_energyPoint = 10;
	_attackDamage = 10;
}

ClapTrap::ClapTrap(const std::string& name)
{
	std::cout << _name << "Non Default Constructor called!\n";
	_name = name;
	_hitPoint = 10;
	_energyPoint = 10;
	_attackDamage = 10;
}

ClapTrap::ClapTrap(
	const std::string& name,
	unsigned int hitPoint,
	unsigned int energyPoint,
	unsigned int attackDamage
)
{
	std::cout << "Clap Trap Non Default+ Constructor called!\n";
	_name = name;
	_hitPoint = hitPoint;
	_energyPoint = energyPoint;
	_attackDamage = attackDamage;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Deconstructor called!\n";
}

ClapTrap::ClapTrap(const ClapTrap& rClap)
{
	std::cout << "copy constructor! called\n";
	_name = rClap._name;
	_hitPoint = rClap._hitPoint;
	_energyPoint = rClap._energyPoint;
	_attackDamage = rClap._attackDamage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rClap)
{
	std::cout << "copy assignment operator called!\n";
	_name = rClap._name;
	_hitPoint = rClap._hitPoint;
	_energyPoint = rClap._energyPoint;
	_attackDamage = rClap._attackDamage;
	return (*this);
}

void	ClapTrap::printInfo()
{
	std::cout << "Name : " << _name << std::endl;
	std::cout << "HP(Hit Point) : " << _hitPoint << std::endl;
	std::cout << "EP(Energy Point) : " << _energyPoint << std::endl;
	std::cout << "AttackDamage : " << _attackDamage << std::endl;
	std::cout << std::endl;	
}

void	ClapTrap::attack(const std::string& target)
{
	if (_energyPoint == 0)
	{
		std::cout << "ClapTrap " << _name << " attacks Failed\n";
		return ;
	}
	_energyPoint--;
	std::cout << "ClapTrap " << _name << " attacks " << target
			<< ", causing " << _attackDamage << " points of damage!\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	_hitPoint = (static_cast<long long int>(_hitPoint) < amount)? 0 : _hitPoint - amount;
	std::cout << "ClapTrap " <<_name << " got damaged : " << amount << "\n";
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoint == 0)
	{
		std::cout << "ClapTrap " << _name << " be Reapaired Failed!\n";
		return ;
	}
	_energyPoint--;
	_hitPoint = (static_cast<long long int>(_hitPoint) + amount > UINT_MAX)? UINT_MAX : _hitPoint + amount;
	std::cout << "ClapTrap beRepaired amount : " << amount << "\n";
}

