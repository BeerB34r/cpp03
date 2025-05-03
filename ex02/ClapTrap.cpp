#include <iostream>

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::clog << "default ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
	std::clog << "string-parameter ClapTrap constructor called" << std::endl;
	this->name = name;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
	std::clog << "copy ClapTrap constructor called" << std::endl;
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
}

ClapTrap&	ClapTrap::operator =(const ClapTrap& other) {
	std::clog << "copy ClapTrap assignment operator called" << std::endl;
	if (this == &other) return *this;
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	return *this;
}

ClapTrap::~ClapTrap() {
	std::clog << "default ClapTrap destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target) {
	std::string name_string = this->name.empty() ? "unnamed ClapTrap" : "ClapTrap " + this->name;

	if (this->hitPoints < 1) {
		std::cout << "from the depths of hell, " << name_string << " is cursing " << target << "'s name..." << std::endl;
	} else if (this->energyPoints < 1) {
		std::cout << "despite its best efforts, " << name_string << " is out of juice and can't attack!" << std::endl;
	} else {
		std::cout << name_string << " deals " << this->attackDamage << " to " << target << std::endl;
		this->energyPoints--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::string name_string = this->name.empty() ? "unnamed ClapTrap" : "ClapTrap " + this->name;

	if (this->hitPoints < 1) {
		std::cout << "you refuse to let " << name_string << "'s corpse lay to rest, dealing another " << amount << " damage to its limp body" << std::endl;
	} else if ((this->hitPoints -= amount) < 1) {
		std::cout << "with a final, mighty blow of " << amount << " damage, " << name_string << " is struck down for good!" << std::endl;
	} else {
		std::cout << "you strike " << name_string << " for " << amount << " damage, but it's not down yet!" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	std::string name_string = this->name.empty() ? "unnamed ClapTrap" : "ClapTrap " + this->name;

	if (this->hitPoints < 1) {
		std::cout << "its already too late for " << name_string << ", it's already succumbed to its wounds..." << std::endl;
	} else if (this->energyPoints < 1) {
		std::cout << "despite its best efforts, " << name_string << " is out of juice and can't repair!" << std::endl;
	} else {
		std::cout << name_string << " pulls itself back together, healing " << amount << " hitpoints" << std::endl;
		this->hitPoints += amount;
	}
}
