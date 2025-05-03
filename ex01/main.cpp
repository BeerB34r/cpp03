#include "ScavTrap.hpp"

int	main() {
	ScavTrap	unnamed;
	ScavTrap	Bob("Bob");

	unnamed.attack("Kyle");
	unnamed.attack("John");
	unnamed.takeDamage(30);
	unnamed.beRepaired(20);
	unnamed.attack("jeff");
	unnamed.attack("Jebediah");
	Bob.guardGate();
}
