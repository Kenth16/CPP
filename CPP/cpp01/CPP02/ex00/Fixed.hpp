#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>

class Fixed {

private:
	int					_value;
	static const int	_nb_bits;

public:
	Fixed();
	Fixed(const Fixed &other);
	Fixed& operator=(const Fixed &other);
	~Fixed();

	int		getRawBits( void ) const;
	void	setRawBits ( int const raw );
	
};

#endif