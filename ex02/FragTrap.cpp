#include <iostream>

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::clog << "default ScavTrap constructor called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(std::string name) {
	std::clog << "string-parameter ScavTrap constructor called" << std::endl;
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& other) {
	std::clog << "copy FragTrap constructor called" << std::endl;
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
}

FragTrap& FragTrap::operator =(const FragTrap& other) {
	std::clog << "copy FragTrap assignment operator called" << std::endl;
	if (this == &other) return *this;
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	return *this;
}

FragTrap::~FragTrap() {
	std::clog << "default FragTrap destructor called" << std::endl;
}

void	FragTrap::highFivesGuys(){
	std::string name_string = this->name.empty() ? "unnamed FragTrap" : "FragTrap " + this->name;

	if (this->hitPoints < 1) {
		std::cout << "despite its present condition as a corpse, " << name_string << " is hoping for you to not leave it hanging!" << std::endl;
	} else if (this->energyPoints < 1) {
		std::cout << "despite its lack of juice, " << name_string << " is holding its hand up in anticipation!" << std::endl;
	} else {
		std::cout << name_string << " shoots its hand in the air \"HIGH FIVE GUYS!\"" << std::endl;
	}
}
