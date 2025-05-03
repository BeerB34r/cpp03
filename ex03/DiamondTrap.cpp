#include <iostream>

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	std::clog << "default DiamondTrap constructor called" << std::endl;
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
}

DiamondTrap::DiamondTrap(std::string name) {
	std::clog << "string-parameter DiamondTrap constructor called" << std::endl;
	this->name = name;
	setName(name + "_clap_name");
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) {
	std::clog << "copy DiamondTrap constructor called" << std::endl;
	this->name = other.name;
	setName(other.getName());
	setHitPoints(other.getHitPoints());
	setEnergyPoints(other.getEnergyPoints());
	setAttackDamage(other.getAttackDamage());
}
DiamondTrap& DiamondTrap::operator =(const DiamondTrap& other) {
	std::clog << "copy DiamondTrap assignment operator called" << std::endl;
	if (this == &other) return *this;
	this->name = other.name;
	setName(other.getName());
	setHitPoints(other.getHitPoints());
	setEnergyPoints(other.getEnergyPoints());
	setAttackDamage(other.getAttackDamage());
	return *this;
}

DiamondTrap::~DiamondTrap() {
	std::clog << "default DiamondTrap destructor called" << std::endl;
}

void	DiamondTrap::whoAmI(){
	std::string name_string = this->name.empty() ? "unnamed DiamondTrap" : "DiamondTrap " + this->name;

	if (getHitPoints() < 1) {
		std::cout << "despite its present condition as a corpse, " << name_string << " mumbles that its also known as " << getName() << std::endl;
	} else if (getEnergyPoints() < 1) {
		std::cout << "despite its lack of juice, " << name_string << " mumbles that its also known as " << getName() << std::endl;
	} else {
		std::cout << name_string << " shouts \"My name is " << getName() << ", Trap of Claps: look on my works, ye Mighty, and despair!" << std::endl;
	}
}
