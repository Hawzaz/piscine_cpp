#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default call" << std::endl;

    this->_fixed = 0;
}

Fixed::Fixed(int const integer)
{
    std::cout << "int constructor called" << std::endl;
    this->_fixed = integer << this->_fractional_bits;
}

Fixed::Fixed(float const floating)
{
    std::cout << "float constructor called" << std::endl;
    this->_fixed = (int)roundf((int)floating << this->_fractional_bits);
}

Fixed::Fixed(Fixed const & src)
{
    std::cout << "Copy called" << std::endl;
    *this = src;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
    std::cout << "assignation operator call" << std::endl;
    if (this != &rhs)
        this->_fixed = rhs.getRawBits();
    return *this;
}

std::ostream & operator<<(std::ostream & o, Fixed const & i)
{
    o << i.getRawBits();

    return o;
}

int Fixed::getRawBits() const
{
    return this->_fixed;
}

void Fixed::setRawBits(int const raw)
{
    this->_fixed = raw;
}

int Fixed::toInt(void) const
{
    return this->_fixed >> this->_fractional_bits;
}

float Fixed::toFloat(void) const
{
    return this->_fixed >> this->_fractional_bits;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;

}