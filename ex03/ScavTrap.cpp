#include <iostream>

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::clog << "default ScavTrap constructor called" << std::endl;
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
}

ScavTrap::ScavTrap(std::string name) {
	std::clog << "string-parameter ScavTrap constructor called" << std::endl;
	setName(name);
	std::clog << "test" << std::endl;
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
}

ScavTrap::ScavTrap(const ScavTrap& other) {
	std::clog << "copy ScavTrap constructor called" << std::endl;
	setName(other.getName());
	setHitPoints(other.getHitPoints());
	setEnergyPoints(other.getEnergyPoints());
	setAttackDamage(other.getAttackDamage());
}

ScavTrap& ScavTrap::operator =(const ScavTrap& other) {
	std::clog << "copy ScavTrap assignment operator called" << std::endl;
	if (this == &other) return *this;
	setName(other.getName());
	setHitPoints(other.getHitPoints());
	setEnergyPoints(other.getEnergyPoints());
	setAttackDamage(other.getAttackDamage());
	return *this;
}

ScavTrap::~ScavTrap() {
	std::clog << "default ScavTrap destructor called" << std::endl;
}

void	ScavTrap::guardGate(){
	std::string name_string = this->getName().empty() ? "unnamed ScavTrap" : "ScavTrap " + this->getName();

	if (getHitPoints() < 1) {
		std::cout << "despite its present condition as a corpse, " << name_string << " is now in gate keeper mode!" << std::endl;
	} else if (getEnergyPoints() < 1) {
		std::cout << "despite its lack of juice, " << name_string << " is now in gate keeper mode!" << std::endl;
	} else {
		std::cout << name_string << " has entered gate keeper mode, watch out for its attacks!" << std::endl;
	}
}
