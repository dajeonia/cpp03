#include "FragTrap.hpp"

int	main(void)
{
	FragTrap a("AI");
	FragTrap b("dajeon");

	std::cout << "=========================" << std::endl;

	a.attack("dajeon");
	b.takeDamage(30);
	b.beRepaird(50);
	a.highFivesGuys();

	std::cout << "=========================" << std::endl;

	return (0);
}
