#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>
#include <cmath>

class Fixed {

private:
	int					_value;
	static const int	_fracBits;

public:
	Fixed();
	Fixed(const int n);
	Fixed(const float f);
	Fixed(const Fixed &other);
	~Fixed();

	Fixed& operator=(const Fixed &other);

	float	toFloat( void ) const;
	int		toInt( void ) const;
	int		getRawBits( void ) const;
	void	setRawBits ( int const raw );
	
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);


#endif