#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) :
   	name(), hit_points(10), energy_points(10), attack_damage(0) {
	std::cout << "ClapTrap " << name << " Default constructor constructed" << std::endl;
}

ClapTrap::ClapTrap(const std::string& _name) :
   	name(_name), hit_points(10), energy_points(10), attack_damage(0) {
	std::cout << "ClapTrap " << name << " String constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap " << name << " Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& c) {
	std::cout << "ClapTrap " << name << " Copy constructor called" << std::endl;
	*this = c;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& c)
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

void	 ClapTrap::attack(const std::string& target)
{
	if (hit_points)
	{
		if (energy_points > 0)
		{
			std::cout << "ClapTrap " << name << " attacks " << "ClapTrap " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
			--energy_points;
		}
		else
			std::cout << "ClapTrap " << name << " not enough energy" << std::endl;
		std::cout << "ClapTrap " << name << " (HP: " << hit_points << ", EP: " << energy_points << ")" << std::endl;
	}
}

void	 ClapTrap::beRepaird(unsigned int amount)
{
	if (hit_points)
	{
		if (energy_points > 0)
		{
			std::cout << "ClapTrap " << name << " repairs " << amount << " hit points!" << std::endl;
			--energy_points;
			hit_points += amount;
		}
		else
			std::cout << "ClapTrap " << name << " not enough energy" << std::endl;
		std::cout << "ClapTrap " << name << " (HP: " << hit_points << ", EP: " << energy_points << ")" << std::endl;
	}
}

void	 ClapTrap::takeDamage(unsigned int amount)
{
	if (hit_points)
	{
		std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
		if (hit_points > amount)
		{
			hit_points -= amount;
			std::cout << "ClapTrap " << name << " (HP: " << hit_points << ", EP: " << energy_points << ")" << std::endl;
		}
		else
		{
			hit_points = 0;
			std::cout << "ClapTrap " << name << " is dead" << std::endl;
		}
	}
}
