#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class	ScavTrap : public virtual ClapTrap {
public:
	ScavTrap();
	ScavTrap(std::string);
	ScavTrap(const ScavTrap&);
	ScavTrap& operator =(const ScavTrap&);
	~ScavTrap();

	void	guardGate();
private:
protected:
};

#endif // SCAVTRAP_HPP
