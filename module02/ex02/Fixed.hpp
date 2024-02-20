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

		void			setRawBits( int const raw );
		int				getRawBits( void ) const;
		int				toInt( void ) const;
		float			toFloat( void ) const;
		bool			operator>(const Fixed a) const;
		bool			operator>=(const Fixed a) const;
		bool			operator<(const Fixed a ) const;
		bool			operator<=(const Fixed a) const;
		static Fixed	min(const Fixed &fixedNumber1, const Fixed &fixedNumber2);
		static Fixed	min(Fixed &fixedNumber1, Fixed &fixedNumber2);
		static Fixed	max(const Fixed &fixedNumber1, const Fixed &fixedNumber2);
		static Fixed	max(Fixed &fixedNumber1, Fixed &fixedNumber2);
		bool operator==(const Fixed a) const;
		bool operator!=(const Fixed a) const;
		Fixed operator+(const Fixed a) const;
		Fixed operator-(const Fixed a);
		Fixed operator*(const Fixed a);
		Fixed operator/(const Fixed a);

	private:
		int					_integer;
		static const int	_coma = 8;
};

std::ostream& operator<<(std::ostream &os, const Fixed &toPrint);
