#include <iostream>

class ScavTrap
{
private:
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
    ScavTrap(std::string const name);
    ScavTrap(ScavTrap const & src);

    ScavTrap & operator=(ScavTrap const & src);

    void        rangedAttack(std::string const & target);
    void        meleeAttack(std::string const & target);
    void        challengeNewcomer(std::string const & target);
    void        takeDamage(unsigned int amount);
    void        beRepaired(unsigned int amount);

    std::string const & getName(void);

    ~ScavTrap();
};