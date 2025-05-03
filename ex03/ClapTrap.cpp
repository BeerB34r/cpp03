#include <iostream>

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::clog << "default ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
	std::clog << "string-parameter ClapTrap constructor called" << std::endl;
	setName(name);
}

ClapTrap::ClapTrap(const ClapTrap& other) {
	std::clog << "copy ClapTrap constructor called" << std::endl;
	setName(other.getName());
	setHitPoints(other.hitPoints);
	setEnergyPoints(other.energyPoints);
	setAttackDamage(other.attackDamage);
}

ClapTrap&	ClapTrap::operator =(const ClapTrap& other) {
	std::clog << "copy ClapTrap assignment operator called" << std::endl;
	if (this == &other) return *this;
	setName(other.name);
	setHitPoints(other.hitPoints);
	setEnergyPoints(other.energyPoints);
	setAttackDamage(other.attackDamage);
	return *this;
}

ClapTrap::~ClapTrap() {
	std::clog << "default ClapTrap destructor called" << std::endl;
}

const std::string	ClapTrap::getName() const { return this->name; }
int	ClapTrap::getHitPoints() const { return this->hitPoints; }
int	ClapTrap::getEnergyPoints() const { return this->energyPoints; }
int	ClapTrap::getAttackDamage() const { return this->attackDamage; }

void	ClapTrap::setName(const std::string& name) { this->name.clear(); this->name.append(name); }
void	ClapTrap::setHitPoints(int n) { this->hitPoints = n; }
void	ClapTrap::setEnergyPoints(int n) { this->energyPoints = n; }
void	ClapTrap::setAttackDamage(int n) { this->attackDamage = n; }


void	ClapTrap::attack(const std::string& target) {
	std::string name_string = getName().empty() ? "unnamed ClapTrap" : "ClapTrap " + this->name;

	if (getHitPoints() < 1) {
		std::cout << "from the depths of hell, " << name_string << " is cursing " << target << "'s name..." << std::endl;
	} else if (getEnergyPoints() < 1) {
		std::cout << "despite its best efforts, " << name_string << " is out of juice and can't attack!" << std::endl;
	} else {
		std::cout << name_string << " deals " << this->attackDamage << " to " << target << std::endl;
		setEnergyPoints(getEnergyPoints() - 1);
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::string name_string = getName().empty() ? "unnamed ClapTrap" : "ClapTrap " + this->name;

	if (getHitPoints() < 1) {
		std::cout << "you refuse to let " << name_string << "'s corpse lay to rest, dealing another " << amount << " damage to its limp body" << std::endl;
	} else if ((getHitPoints() - amount) < 1) {
		std::cout << "with a final, mighty blow of " << amount << " damage, " << name_string << " is struck down for good!" << std::endl;
		setHitPoints(0);
	} else {
		std::cout << "you strike " << name_string << " for " << amount << " damage, but it's not down yet!" << std::endl;
		setHitPoints(getHitPoints() - amount);
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	std::string name_string = getName().empty() ? "unnamed ClapTrap" : "ClapTrap " + this->name;

	if (getHitPoints() < 1) {
		std::cout << "its already too late for " << name_string << ", it's already succumbed to its wounds..." << std::endl;
	} else if (getEnergyPoints() < 1) {
		std::cout << "despite its best efforts, " << name_string << " is out of juice and can't repair!" << std::endl;
	} else {
		std::cout << name_string << " pulls itself back together, healing " << amount << " hitpoints" << std::endl;
		setHitPoints(getHitPoints() + amount);
		setEnergyPoints(getEnergyPoints() - 1);
	}
}
