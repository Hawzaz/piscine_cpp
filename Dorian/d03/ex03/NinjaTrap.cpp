#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"

NinjaTrap::NinjaTrap(std::string const name) : ClapTrap(name)
{
    std::cout << "There's more to learn!(NinjaTrap)" << std::endl;
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_energyPoints = 50;
    this->_maxEnergyPoints = 50;
    this->_level = 1;
    this->_meleeAttackDamage = 20;
    this->_rangedAttackDamage = 15;
    this->_armorReduction = 3;
}

NinjaTrap::NinjaTrap(NinjaTrap const & src) : ClapTrap(src)
{
    std::cout << "Constructor NinjaTrap copy called" << std::endl;
    *this = src;
}

NinjaTrap & NinjaTrap::operator=(NinjaTrap const & rhs)
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

void    NinjaTrap::challengeNewcomer(std::string const & target)
{
    std::string tab[6] = {"", "A!", "Freezy B!", "Flesh C!",
        "Eww! D.", "I have an F!"};

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
    std::cout << "chall -> ";
    std::cout << tab[random] << std::endl;
}

NinjaTrap::~NinjaTrap()
{
    std::cout << "NinjaTrap destructor" << std::endl;
}