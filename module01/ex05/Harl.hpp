#pragma once

#include <string>

class 	Harl{
	public:
		Harl();
		~Harl();

		void complain( std::string level );
		void (Harl::*array_ptr_ft[4])(void);

	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
};
