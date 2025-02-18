#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>
#include <cmath>

class Fixed {

private:
	Fixed const x;
    Fixed const y;

public:
// Constructors.
	Point();
	Point(const int n);
	Point(const float f);

// Copy constructors.
	Point(const Point &other);

// Deconstructors.
	~Point();

// Overloaded operators.
	Point& 			operator=(const Point &other);

	
};

std::ostream &operator<<(std::ostream &out, const Point &Point);


#endif