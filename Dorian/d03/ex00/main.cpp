#include "FragTrap.hpp"


int main(void)
{
    FragTrap    ft1("FR4G-TP");
    FragTrap    ft2("Baby");

    ft1.rangedAttack(ft2.getName());
    ft1.meleeAttack(ft2.getName());

    for (int i = 0; i < 5; i++)
        ft1.vaulthunter_dot_exe(ft2.getName());

}