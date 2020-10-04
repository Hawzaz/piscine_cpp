#include <iostream>
#include "Brain.hpp"

class Human
{
    private:
        Brain const _brain;

    public:
        const Brain &getBrain(void) const;
        std::string identify(void) const;
};