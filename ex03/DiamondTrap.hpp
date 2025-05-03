#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class	DiamondTrap	:	public ScavTrap, public FragTrap {
public:
	DiamondTrap();
	DiamondTrap(std::string);
	DiamondTrap(const DiamondTrap&);
	DiamondTrap& operator =(const DiamondTrap&);
	~DiamondTrap();

	void	whoAmI();
	using ScavTrap::attack;
	using ClapTrap::setName;
	using ClapTrap::getName;
	using FragTrap::getHitPoints;
	using FragTrap::setHitPoints;
	using ScavTrap::getEnergyPoints;
	using ScavTrap::setEnergyPoints;
	using FragTrap::getAttackDamage;
	using ScavTrap::setAttackDamage;

private:
	std::string	name;

protected:
};

#endif // DIAMONDTRAP_HPP
