# pragma once
# include "ClapTrap.hpp"

class FragTrap: public ClapTrap {
    public:
	FragTrap();
	FragTrap(const FragTrap &toCopy);
	FragTrap& operator=(const FragTrap &toCopy);
	virtual ~FragTrap();
    FragTrap(std::string name);

 	void        attack(const std::string& target);
    void        highFivesGuys(void);
};
