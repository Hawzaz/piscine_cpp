#include "FragTrap.hpp"

FragTrap::FragTrap(std::string const name) : _name(name)
{
    std::cout << "There's more to learn!" << std::endl;
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_energyPoints = 100;
    this->_maxEnergyPoints = 100;
    this->_level = 1;
    this->_meleeAttackDamage = 30;
    this->_rangedAttackDamage = 20;
    this->_armorReduction = 5;
}

FragTrap::FragTrap(FragTrap const & src)
{
    std::cout << "Constructor copy called" << std::endl;
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

void    FragTrap::rangedAttack(std::string const & target)
{
    std::cout << "Where'd all my bullets go?" << std::endl;
    std::cout << this->getName() << " attack ";
    std::cout << target << " at range, causing " << this->_rangedAttackDamage << std::endl;

}

void    FragTrap::meleeAttack(std::string const & target)
{
    std::cout << "Heyyah!" << std::endl;
    std::cout << this->getName() << " attack ";
    std::cout << target << " at melee, causing " << this->_meleeAttackDamage << std::endl;
}

void    FragTrap::takeDamage(unsigned int amount)
{
    std::cout << "Pop pop!" << std::endl;
    std::cout << "took : " << amount << " of damage";
    if (this->_hitPoints - (amount - this->_armorReduction) < 0)
        this->_hitPoints = 0;
    else
        this->_hitPoints -= (amount - this->_armorReduction);
}

void    FragTrap::beRepaired(unsigned int amount)
{
    std::cout << "Can I just say... yeehaw." << std::endl;
    std::cout << "Healing for : " << amount;
    if (this->_hitPoints + amount > 100)
        this->_hitPoints = this->_maxHitPoints;
    else
        this->_hitPoints += amount;
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

std::string const & FragTrap::getName()
{
    return this->_name;
}

FragTrap::~FragTrap()
{

}