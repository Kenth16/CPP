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
// Constructors.
	Fixed();
	Fixed(const int n);
	Fixed(const float f);

// Copy constructors.
	Fixed(const Fixed &other);

// Deconstructors.
	~Fixed();

// Overloaded operators.
	Fixed& 			operator=(const Fixed &other);

	bool			operator>(const Fixed& other) const;
	bool			operator<(const Fixed& other) const;
	bool			operator>=(const Fixed& other) const;
	bool			operator<=(const Fixed& other) const;
	bool			operator==(const Fixed& other) const;
	bool			operator!=(const Fixed& other) const;

	Fixed			operator+(const Fixed& other) const;
	Fixed			operator-(const Fixed& other) const;
	Fixed			operator*(const Fixed& other) const;
	Fixed			operator/(const Fixed& other) const;

	Fixed& 			operator--();
	Fixed  			operator--(int);
	Fixed& 			operator++();
	Fixed			operator++(int);

	static Fixed&			max(Fixed& a, Fixed& b);
	static Fixed&			min(Fixed& a, Fixed& b);
	static const Fixed&	max(const Fixed& a, const Fixed& b);
	static const Fixed&	min(const Fixed& a, const Fixed& b);



	float			toFloat( void ) const;
	int				toInt( void ) const;

	int				getRawBits( void ) const;
	void			setRawBits ( int const raw );
	
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);


#endif