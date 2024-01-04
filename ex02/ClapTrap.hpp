#ifndef CLAPTRAP_CPP
# define CLAPTRAP_CPP
# include <iostream>

class ClapTrap {
protected:
	std::string name;
	unsigned int hit_points;
	unsigned int energy_points;
	unsigned int attack_damage;
public:
	ClapTrap();
	ClapTrap(const ClapTrap&);
	ClapTrap(const std::string&);
	ClapTrap& operator=(const ClapTrap&);
	virtual ~ClapTrap();

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaird(unsigned int amount);
};

#endif
