#pragma once

class Fixed {
	public:
		Fixed();
		Fixed(const Fixed &toCopy);
		Fixed& operator=(const Fixed &toCopy);
		~Fixed();
		Fixed(const int nb);
		Fixed(const float nb);
		int getRawBits( void ) const;
		void setRawBits( int const raw );

	private:
		int					_integer;
		static const int	_coma;
};
