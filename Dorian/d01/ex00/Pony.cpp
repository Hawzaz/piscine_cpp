#include "Pony.hpp"

Pony::Pony(void)
{
    std::cout << "Pony created" << std::endl;
}


Pony::~Pony(void)
{
    std::cout << "Pony deleted" << std::endl;
}


void Pony::print(const char *s)
{
    std::cout << s << std::endl;
}