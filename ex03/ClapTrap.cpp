#include "ClapTrap.hpp"
#include <iostream>
#include <climits>

ClapTrap::ClapTrap()
{
	std::cout << "Clap Default Constructor called!\n";
	_name = "null";
	_hitPoint = 10;
	_energyPoint = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap(const std::string& name)
{
	std::cout << _name << "Clap Non Default Constructor called!\n";
	_name = name;
	_hitPoint = 10;
	_energyPoint = 10;
	_attackDamage = 0;
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
	std::cout << "Clap Deconstructor called!\n";
}

ClapTrap::ClapTrap(const ClapTrap& rClap)
{
	std::cout << "Clap copy constructor! called\n";
	_name = rClap._name;
	_hitPoint = rClap._hitPoint;
	_energyPoint = rClap._energyPoint;
	_attackDamage = rClap._attackDamage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rClap)
{
	std::cout << "Clap copy assignment operator called!\n";
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
	std::cout << "ClapTrap " << _name << " be Repaired amount : " << amount << "\n";
}

std::string ClapTrap::getName() const
{
	return (_name);
}
	
unsigned int ClapTrap::getHitPoint() const
{
	return (_hitPoint);
}

unsigned int ClapTrap::getEnergyPoint() const
{
	return (_energyPoint);
}

unsigned int ClapTrap::getAttackDamage() const 
{
	return (_attackDamage);
}

void	ClapTrap::setName(const std::string& name)
{
	_name = name;
}

void	ClapTrap::setHitPoint(unsigned int hitPoint)
{
	_hitPoint = hitPoint;
}

void	ClapTrap::setEnergyPoint(unsigned int energyPoint)
{
	_energyPoint = energyPoint;
}

void	ClapTrap::setAttackDamage(unsigned int attackDamage)
{
	_attackDamage = attackDamage;
}
