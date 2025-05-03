#include "FragTrap.hpp"

int	main() {
	FragTrap	unnamed;
	FragTrap	Bob("Bob");

	unnamed.attack("Kyle");
	unnamed.attack("John");
	unnamed.takeDamage(30);
	unnamed.beRepaired(20);
	unnamed.attack("jeff");
	unnamed.attack("Jebediah");
	Bob.highFivesGuys();
}
