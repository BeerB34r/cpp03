#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class	ClapTrap {
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap&);
	ClapTrap& operator=(const ClapTrap&);
	~ClapTrap();

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
private:
	std::string	name;
	int			hitPoints = 10;
	int			energyPoints = 10;
	int			attackDamage = 0;
protected:
	const std::string	getName() const;
	int		getHitPoints() const;
	int		getEnergyPoints() const;
	int		getAttackDamage() const;
	void	setName(const std::string& name);
	void	setHitPoints(int n);
	void	setEnergyPoints(int n);
	void	setAttackDamage(int n);
};
#endif // CLAPTRAP_HPP
