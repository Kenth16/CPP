#include "Fixed.hpp"

const int   Fixed::_fracBits = 8;

Fixed::Fixed() : _value(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n) {
    std::cout << "Int constructor called" << std::endl;
    this->_value = n << _fracBits;
}

Fixed::Fixed(const float f) {
    std::cout << "Float constructor called" << std::endl;
    this->_value = roundf(f * (1 << _fracBits));
}

Fixed::Fixed(const Fixed &other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

// Operateur d'affectation
Fixed& Fixed::operator=(const Fixed &other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->_value = other.getRawBits();
    }
    return *this;
}

/**********************************************************/

float   Fixed::toFloat(void) const {
    return (float)_value / (1 << _fracBits);
}

int     Fixed::toInt(void) const {
    return _value >> _fracBits;
}

int		Fixed::getRawBits( void ) const {
    return (this->_value);
}

void	Fixed::setRawBits ( int const raw ) {
    this->_value = raw;
}

/**********************************************************/

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
    out << fixed.toFloat();
    return out;
}


	