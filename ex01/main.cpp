#include "ScavTrap.hpp"

int	main(void)
{

	ScavTrap a("AI");
	ScavTrap b("dajeon");

	std::cout << "=========================" << std::endl;

	a.attack("dajeon");
	b.takeDamage(20);
	a.beRepaird(50);
	a.guardGate();

	std::cout << "=========================" << std::endl;

	return (0);
}
