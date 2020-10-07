#ifndef SCAVTRAP_HPP
 # define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:

public:
    ScavTrap(std::string const name);
    ScavTrap(ScavTrap const & src);

    ScavTrap & operator=(ScavTrap const & src);

        void        print(void);

    void        challengeNewcomer(std::string const & target);

    ~ScavTrap();
};

#endif