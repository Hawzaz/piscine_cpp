#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const name) : _name(name)
{
    std::cout << "There's more to learn!" << std::endl;
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_energyPoints = 50;
    this->_maxEnergyPoints = 50;
    this->_level = 1;
    this->_meleeAttackDamage = 20;
    this->_rangedAttackDamage = 15;
    this->_armorReduction = 3;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
    std::cout << "Constructor copy called" << std::endl;
    *this = src;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
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

void    ScavTrap::rangedAttack(std::string const & target)
{
    std::cout << "Where'd all my bullets go?" << std::endl;
    std::cout << this->getName() << " attack ";
    std::cout << target << " at range, causing " << this->_rangedAttackDamage << std::endl;

}

void    ScavTrap::meleeAttack(std::string const & target)
{
    std::cout << "Heyyah!" << std::endl;
    std::cout << this->getName() << " attack ";
    std::cout << target << " at melee, causing " << this->_meleeAttackDamage << std::endl;
}

void    ScavTrap::takeDamage(unsigned int amount)
{
    std::cout << "Pop pop!" << std::endl;
    std::cout << "took : " << amount << " of damage";
    if (this->_hitPoints - (amount - this->_armorReduction) < 0)
        this->_hitPoints = 0;
    else
        this->_hitPoints -= (amount - this->_armorReduction);
}

void    ScavTrap::beRepaired(unsigned int amount)
{
    std::cout << "Can I just say... yeehaw." << std::endl;
    std::cout << "Healing for : " << amount;
    if (this->_hitPoints + amount > 100)
        this->_hitPoints = this->_maxHitPoints;
    else
        this->_hitPoints += amount;
}

void    ScavTrap::challengeNewcomer(std::string const & target)
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

std::string const & ScavTrap::getName()
{
    return this->_name;
}

ScavTrap::~ScavTrap()
{

}