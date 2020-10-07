#include <iostream>

class Fixed
{
private:
    int     _fixed;
    static int const _fractional_bits = 8;

public:
    Fixed(void);
    Fixed(int fixed);
    
    Fixed(Fixed const & src);

    Fixed & operator=(Fixed const & src);
    int getRawBits(void) const;
    void setRawBits(int const raw);


    ~Fixed();
};