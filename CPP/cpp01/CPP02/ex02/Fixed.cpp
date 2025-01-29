#include "Fixed.hpp"

const int   Fixed::_fracBits = 8;

Fixed::Fixed() : _value(0) {
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n) {
    // std::cout << "Int constructor called" << std::endl;
    this->_value = n << _fracBits;
}

Fixed::Fixed(const float f) {
    // std::cout << "Float constructor called" << std::endl;
    this->_value = roundf(f * (1 << _fracBits));
}

Fixed::Fixed(const Fixed &other) {
    // std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed::~Fixed() {
    // std::cout << "Destructor called" << std::endl;
}

// Operateur d'affectation
Fixed& Fixed::operator=(const Fixed &other) {
    // std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->_value = other.getRawBits();
    }
    return *this;
}

/**********************************************************/
// Operateur de comparaison

bool    Fixed::operator>(const Fixed& other) const {
    return this->_value > other._value;
}


bool	Fixed::operator<(const Fixed& other) const {
    return this->_value < other._value;
}

bool	Fixed::operator>=(const Fixed& other) const {
    return this->_value >= other._value;
}

bool	Fixed::operator<=(const Fixed& other) const {
    return this->_value <= other._value;
}


bool	Fixed::operator==(const Fixed& other) const {
    return this->_value == other._value;
}

bool	Fixed::operator!=(const Fixed& other) const {
    return this->_value != other._value;
}

/**********************************************************/
// Operateurs de arithmetiques

Fixed	Fixed::operator+(const Fixed& other) const {
    return Fixed(this->toFloat() + other.toFloat());
}

Fixed	Fixed::operator-(const Fixed& other) const {
    return Fixed(this->toFloat() - other.toFloat());
}

Fixed	Fixed::operator*(const Fixed& other) const {
    return Fixed(this->toFloat() * other.toFloat());
}

Fixed	Fixed::operator/(const Fixed& other) const {
    return Fixed(this->toFloat() / other.toFloat());
}

/**********************************************************/
// Operateur d'incrementation et de decrementation

Fixed&   Fixed::operator--() {
    this->_value -= 1;
    return *this;
}

Fixed  Fixed::operator--(int) {
    Fixed   temp(*this);
    this->_value -= 1;
    return temp;
}

Fixed&  Fixed::operator++() {
    this->_value += 1;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed   temp(*this);
    this->_value += 1;
    return temp;
}

/**********************************************************/

f

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

