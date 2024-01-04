#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& _name) : ClapTrap(_name)
{
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
	std::cout << "ScavTrap " << name << " String constructor constructed" << std::endl;
}

ScavTrap::ScavTrap(void) : ClapTrap()
{
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
	std::cout << "ScavTrap " << name << " Default constructor constructed" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& c) : ClapTrap(c)
{
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
	std::cout << "ScavTrap " << name << " Default constructor constructed" << std::endl;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ClapTrap " << name << " Destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& c)
{
	if (this != &c)
	{
		name = c.name;
		hit_points = c.hit_points;
		energy_points = c.energy_points;
		attack_damage = c.attack_damage;
	}
	return (*this);
}

void	 ScavTrap::attack(const std::string& target)
{
	if (hit_points)
	{
		if (energy_points > 0)
		{
			std::cout << "ScavTrap " << name << " attacks " << "ClapTrap " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
			--energy_points;
		}
		else
			std::cout << "ScavTrap " << name << " not enough energy" << std::endl;
		std::cout << "ScavTrap " << name << " (HP: " << hit_points << ", EP: " << energy_points << ")" << std::endl;
	}
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << name << " is now in Gate keeper mode!" << std::endl;
}
