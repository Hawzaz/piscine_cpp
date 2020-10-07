#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    FragTrap frag("FRAG");
    frag.showInfos();

    ScavTrap scav("SCAV");
    scav.showInfos();

    ScavTrap scav2(scav);
    scav2.showInfos();

}