#ifndef NINJATRAP_HPP
 # define NINJATRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class NinjaTrap : public ClapTrap
{
private:

public:
    NinjaTrap(std::string const name);
    NinjaTrap(NinjaTrap const & src);

    NinjaTrap & operator=(NinjaTrap const & src);

        void        print(void);

    void        ninjaShoebox(ClapTrap const & clap);
    void        ninjaShoebox(ClapTrap const & clap);

    ~NinjaTrap();
};

#endif