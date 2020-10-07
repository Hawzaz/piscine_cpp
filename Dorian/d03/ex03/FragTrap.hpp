#ifndef FRAGTRAP_HPP
 # define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    private:

    public:
        FragTrap(std::string const name);
        FragTrap(FragTrap const & src);

        FragTrap & operator=(FragTrap const & src);

        void        vaulthunter_dot_exe(std::string const & target);

        ~FragTrap();
    };

#endif