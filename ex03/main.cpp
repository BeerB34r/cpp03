#include "DiamondTrap.hpp"

void	tireOut(DiamondTrap &trap, int n) {
	for (int i = 0; i < n; i++) trap.attack("target dummy");
}

int	main() {
	DiamondTrap John("John");

	tireOut(John, 95);
	John.whoAmI();
	John.guardGate();
	John.highFivesGuys();
	John.attack("Pork");
	John.attack("Pork");
	John.attack("Pork");
	John.attack("Pork");
	John.takeDamage(75);
	John.beRepaired(50);
	John.whoAmI();
	John.attack("Pork");
	John.whoAmI();
	John.takeDamage(75);
	John.whoAmI();
}
