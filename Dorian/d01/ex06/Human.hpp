#include <iostream>
#include "Weapon.hpp"

class HumanA
{
    private:
        Weapon&         _weapon;
        std::string     _name;

    public:
        HumanA(const char *s, Weapon &weap) : _weapon(weap) {this->_name = std::string(s);};
        ~HumanA() {}

        void    attack(void) {std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;};
};

class HumanB
{
    private:
        Weapon          *_weapon;
        std::string     _name;

    public:
        HumanB(const char *s) {this->_name = std::string(s);};
        ~HumanB() {}

        void    attack(void) {std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;};
        void    setWeapon(Weapon& weap) {this->_weapon = &weap;};

};