#include "Fixed.hpp"

int main( void )
{
	Fixed const a(26);
	Fixed b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	
	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << Fixed::min(a, b) << std::endl;

	return 0;
}