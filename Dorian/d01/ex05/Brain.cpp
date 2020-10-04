
#include "Brain.hpp"

std::string Brain::identify(void) const
{
    std::stringstream ss;

    ss << (const void *)this;
    std::string s = ss.str();
    return (s);
}