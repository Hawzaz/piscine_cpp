#include <iostream>
#include <sstream>

class Brain
{
    public:
        std::string addr;
        Brain() {std::cout << "IN\n";}
        std::string identify(void) const;
};