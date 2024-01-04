#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap a("A"); // a: 10, 10
	ClapTrap b("B"); // b: 10, 10

	a.attack("B"); // a: 10, 9(-1)
	b.takeDamage(0);

	a.takeDamage(5); // a: 5(-5), 9
	a.beRepaird(10); // a: 15(+10), 8
	a.takeDamage(15); // 죽은 상태
					  //
	a.attack("B"); // 죽어서 공격 못함

	return (0);
}
