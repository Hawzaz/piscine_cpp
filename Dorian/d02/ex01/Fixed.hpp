#include <iostream>
#include <cmath>

class Fixed
{
private:
    int     _fixed;
    static int const _fractional_bits = 8;

public:
    Fixed(void);
    Fixed(int const integer);
    Fixed(float const floating);
    
    Fixed(Fixed const & src);

    Fixed & operator=(Fixed const & src);

    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    float   toFloat(void) const;
    int     toInt(void) const;



    ~Fixed();
};

std::ostream & operator<<(std::ostream & o, Fixed const & i);