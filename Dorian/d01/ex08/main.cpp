#include <iostream>
#include "Human.hpp"


int main(void)
{
    Human   pablo;

    std::string p = "meleeAttack";
    std::string & l = p;

    pablo.action(p, p);
    return (0);
}