#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default call" << std::endl;

    this->_fixed = 0;
}

Fixed::Fixed(int fixed) : _fixed(fixed)
{
    std::cout << "Constructor called" << std::endl;
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

int Fixed::getRawBits() const
{
    std::cout << "getRawBits call" << std::endl;
    return this->_fixed;
}

void Fixed::setRawBits(int const raw)
{
    this->_fixed = raw;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;

}