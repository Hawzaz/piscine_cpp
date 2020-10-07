#include "FragTrap.hpp"

FragTrap::FragTrap(std::string const name) : ClapTrap(name)
{
    std::cout << "There's more to learn! (FragTrap)" << std::endl;
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_energyPoints = 100;
    this->_maxEnergyPoints = 100;
    this->_level = 1;
    this->_meleeAttackDamage = 30;
    this->_rangedAttackDamage = 20;
    this->_armorReduction = 5;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src)
{
    std::cout << "Constructor FragTrap copy called" << std::endl;
    *this = src;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
{
    std::cout << "assignation operator '=' called" << std::endl;
    if (this != &rhs)
    {
        this->_hitPoints = rhs._hitPoints;
        this->_maxHitPoints = rhs._maxHitPoints;
        this->_energyPoints = rhs._energyPoints;
        this->_maxEnergyPoints = rhs._maxEnergyPoints;
        this->_level = rhs._level;
        this->_meleeAttackDamage = rhs._meleeAttackDamage;
        this->_rangedAttackDamage = rhs._rangedAttackDamage;
        this->_armorReduction = rhs._armorReduction;
    }
    return *this;
}

void    FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    std::string tab[6] = {"", "Grenade!", "Freezy peezy!", "Flesh fireworks!",
        "Eww! Cool.", "I have an IDEA!"};

    static int first = 1;
    int         random;

    if (this->_energyPoints < 25)
    {
        std::cout << "Out of energy" << std::endl;
        return ;
    }
    if (first)
    {
        srand( time(NULL ));
        first = 0;
    }
    random = 1 + rand () % ((5 + 1) - 1);
    std::cout << "attack -> ";
    std::cout << tab[random] << std::endl;
    std::cout << "cost 25 energy" << std::endl;
    this->_energyPoints -= 25;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor" << std::endl;
}