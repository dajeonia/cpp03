#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"
# include <iostream>

class FragTrap : public ClapTrap {
public:
	FragTrap();
	FragTrap(const std::string&);
	FragTrap(const FragTrap&);
	FragTrap& operator=(const FragTrap&);
	~FragTrap();

	void highFivesGuys(void);
};

#endif
