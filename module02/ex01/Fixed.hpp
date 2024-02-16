#pragma once
#include <iostream>

class Fixed {
	public:
		Fixed();
		Fixed(const Fixed &toCopy);
		Fixed& operator=(const Fixed &toCopy);
		~Fixed();
		Fixed(const int nb);
		Fixed(const float nb);
		void setRawBits( int const raw );
		int getRawBits( void ) const;
		int toInt( void ) const;
		float toFloat( void ) const;

	private:
		int					_integer;
		static const int	_coma = 8;
};

std::ostream& operator<<(std::ostream &os, const Fixed &toPrint);
