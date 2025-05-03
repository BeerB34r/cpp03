#include "ClapTrap.hpp"

int	main() {
	ClapTrap	unnamed;
	ClapTrap	Keith("Keith");
	ClapTrap	copycat(Keith);
	ClapTrap	square;

	unnamed.attack("Kyle");
	unnamed.attack("Kyle");
	unnamed.attack("Kyle");
	unnamed.attack("Kyle");
	unnamed.attack("Kyle");
	unnamed.takeDamage(5);
	unnamed.beRepaired(2);
	unnamed.attack("Kyle");
	unnamed.attack("Kyle");
	unnamed.attack("Kyle");
	unnamed.attack("Kyle");
	unnamed.attack("Kyle");
	unnamed.takeDamage(5);
	unnamed.attack("Kyle");
	square = unnamed;
	unnamed.takeDamage(5);
	unnamed.attack("Kyle");
	unnamed.takeDamage(1);
	unnamed.takeDamage(1);

	square.attack("Kyle");
	Keith.attack("john");
	copycat.attack("john");
}
