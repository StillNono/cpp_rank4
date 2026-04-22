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

    //Operadores Logicos
    bool operator>(const Fixed &other) const;
    bool operator<(const Fixed &other) const;
    bool operator!=(const Fixed &other) const;
    bool operator==(const Fixed &other) const;
    bool operator<=(const Fixed &other) const;
    bool operator>=(const Fixed &other) const;

    //Operadores Aritmedicos
    Fixed operator*(const Fixed &other) const;
    Fixed operator+(const Fixed &other) const;
    Fixed operator-(const Fixed &other) const;
    Fixed operator/(const Fixed &other) const;

    // Operadores de Incremento/Decremento
    Fixed &operator++(void);
    Fixed operator++(int); 
    Fixed &operator--(void);
    Fixed operator--(int);

    // Funções Estáticas (min/max)
    static Fixed &min(Fixed &a, Fixed &b);
    static const Fixed &min(const Fixed &a, const Fixed &b);
    static Fixed &max(Fixed &a, Fixed &b);
    static const Fixed &max(const Fixed &a, const Fixed &b);
};

std::ostream &operator<<(std::ostream &o, Fixed const &i);

#endif