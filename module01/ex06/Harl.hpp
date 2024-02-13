#pragma once

#include <string>

class 	Harl{
	public:
		Harl();
		~Harl();

		int		filter( std::string level );
		void	complain( int level );
		void	complainFilter( std::string level );
		void	(Harl::*array_ptr_ft[4])(void);

	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
};
