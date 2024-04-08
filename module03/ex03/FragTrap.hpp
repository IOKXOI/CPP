# pragma once
# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap {
	public:
		FragTrap();
		FragTrap(const FragTrap &toCopy);
		FragTrap(std::string name);
		virtual ~FragTrap();
		FragTrap& operator=(const FragTrap &toCopy);
	
		virtual void	attack(const std::string& target);
		void			highFivesGuys(void);

};
