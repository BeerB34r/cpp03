#include <iostream>

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::clog << "default FragTrap constructor called" << std::endl;
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
}

FragTrap::FragTrap(std::string name) {
	std::clog << "string-parameter FragTrap constructor called" << std::endl;
	setName(name);
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
}

FragTrap::FragTrap(const FragTrap& other) {
	std::clog << "copy FragTrap constructor called" << std::endl;
	setName(other.getName());
	setHitPoints(other.getHitPoints());
	setEnergyPoints(other.getEnergyPoints());
	setAttackDamage(other.getAttackDamage());
}

FragTrap& FragTrap::operator =(const FragTrap& other) {
	std::clog << "copy FragTrap assignment operator called" << std::endl;
	if (this == &other) return *this;
	setName(other.getName());
	setHitPoints(other.getHitPoints());
	setEnergyPoints(other.getEnergyPoints());
	setAttackDamage(other.getAttackDamage());
	return *this;
}

FragTrap::~FragTrap() {
	std::clog << "default FragTrap destructor called" << std::endl;
}

void	FragTrap::highFivesGuys(){
	std::string name_string = getName().empty() ? "unnamed FragTrap" : "FragTrap " + getName();

	if (getHitPoints() < 1) {
		std::cout << "despite its present condition as a corpse, " << name_string << " is hoping for you to not leave it hanging!" << std::endl;
	} else if (getEnergyPoints() < 1) {
		std::cout << "despite its lack of juice, " << name_string << " is holding its hand up in anticipation!" << std::endl;
	} else {
		std::cout << name_string << " shoots its hand in the air \"HIGH FIVE GUYS!\"" << std::endl;
	}
}
