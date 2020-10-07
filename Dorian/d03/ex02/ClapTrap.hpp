#ifndef CLAPTRAP_HPP
 # define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    protected:
        std::string const       _name;
        int                     _hitPoints;
        int                     _maxHitPoints;
        int                     _energyPoints;
        int                     _maxEnergyPoints;
        int                     _level;
        int                     _meleeAttackDamage;
        int                     _rangedAttackDamage;
        int                     _armorReduction;

    public:
        ClapTrap(std::string const name);
        ClapTrap(ClapTrap const & src);

        ClapTrap & operator=(ClapTrap const & src);

        void        rangedAttack(std::string const & target);
        void        meleeAttack(std::string const & target);
        void        takeDamage(unsigned int amount);
        void        beRepaired(unsigned int amount);
        void        showInfos(void);

        std::string const & getName(void);

        ~ClapTrap();
};

#endif