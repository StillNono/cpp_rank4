#ifndef FIXED_HPP
#define	FIXED_HPP

#include <string>
#include <iostream>

class Fixed
{
private:
	int _val;
	static const int    _fractionalBits;
public:
	Fixed();                     // Construtor
	Fixed(const Fixed &other); // Copia
	Fixed &operator=(const Fixed &other); // Atribuição
	~Fixed();        // Destrutor
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};


#endif