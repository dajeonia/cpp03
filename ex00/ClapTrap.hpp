class ClapTrap {
	std::string name;
	int hit_points;
	int energy_points;
	int attack_damage;
public:
	ClapTrap();
	~ClapTrap();
	ClapTrap(const ClapTrap&);
	ClapTrap& operator=(const ClapTrap&);
}
