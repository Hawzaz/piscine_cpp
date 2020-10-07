#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string const name) : _name(name)
{
    std::cout << "There's more to learn! (ClapTrap)" << std::endl;
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_energyPoints = 100;
    this->_maxEnergyPoints = 100;
    this->_level = 1;
    this->_meleeAttackDamage = 30;
    this->_rangedAttackDamage = 20;
    this->_armorReduction = 5;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
    std::cout << "Constructor ClapTrap copy called" << std::endl;
    *this = src;
}

std::string const & ClapTrap::getName()
{
    return this->_name;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
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

void    ClapTrap::showInfos(void)
{
    std::cout << this->_hitPoints << std::endl;
    std::cout << this->_maxHitPoints << std::endl;
    std::cout << this->_energyPoints << std::endl;
    std::cout << this->_maxEnergyPoints << std::endl;
    std::cout << this->_level << std::endl;
    std::cout << this->_meleeAttackDamage << std::endl;
    std::cout << this->_rangedAttackDamage << std::endl;
    std::cout << this->_armorReduction << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor" << std::endl;
}