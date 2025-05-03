#include <iostream>

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::clog << "default ScavTrap constructor called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) {
	std::clog << "string-parameter ScavTrap constructor called" << std::endl;
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other) {
	std::clog << "copy ScavTrap constructor called" << std::endl;
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
}

ScavTrap& ScavTrap::operator =(const ScavTrap& other) {
	std::clog << "copy ScavTrap assignment operator called" << std::endl;
	if (this == &other) return *this;
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	return *this;
}

ScavTrap::~ScavTrap() {
	std::clog << "default ScavTrap destructor called" << std::endl;
}

void	ScavTrap::guardGate(){
	std::string name_string = this->name.empty() ? "unnamed ScavTrap" : "ScavTrap " + this->name;

	if (this->hitPoints < 1) {
		std::cout << "despite its present condition as a corpse, " << name_string << " is now in gate keeper mode!" << std::endl;
	} else if (this->energyPoints < 1) {
		std::cout << "despite its lack of juice, " << name_string << " is now in gate keeper mode!" << std::endl;
	} else {
		std::cout << name_string << " has entered gate keeper mode, watch out for its attacks!" << std::endl;
	}
}
