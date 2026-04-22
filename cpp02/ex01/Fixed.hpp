#ifndef FIXED_HPP
#define	FIXED_HPP

#include <string>
#include <iostream>
#include <cmath>

class Fixed {
private:
    int _val;
    static const int _fractionalBits;

public:
    Fixed();
    Fixed(const Fixed &other);
    Fixed &operator=(const Fixed &other);
    ~Fixed();

    Fixed(const int n);
    Fixed(const float n);

    float toFloat(void) const;
    int toInt(void) const;

    int getRawBits(void) const;
    void setRawBits(int const raw);

};

std::ostream &operator<<(std::ostream &o, Fixed const &i);

#endif