#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& _name) : ClapTrap(_name)
{
	hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
	std::cout << "FragTrap " << name << " String constructor constructed" << std::endl;
}

FragTrap::FragTrap(void) : ClapTrap()
{
	hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
	std::cout << "FragTrap " << name << " Default constructor constructed" << std::endl;
}

FragTrap::FragTrap(const FragTrap& c) : ClapTrap(c)
{
	hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
	std::cout << "FragTrap " << name << " Default constructor constructed" << std::endl;
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap " << name << " Destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& c)
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

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << name << ": Heyyyyy Guys Let's High Fives!" << std::endl;
}
