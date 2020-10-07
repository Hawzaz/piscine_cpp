#include <iostream>

class FragTrap
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
    FragTrap(std::string const name);
    FragTrap(FragTrap const & src);

    FragTrap & operator=(FragTrap const & src);

    void        rangedAttack(std::string const & target);
    void        meleeAttack(std::string const & target);
    void        vaulthunter_dot_exe(std::string const & target);
    void        takeDamage(unsigned int amount);
    void        beRepaired(unsigned int amount);

    std::string const & getName(void);

    ~FragTrap();
};