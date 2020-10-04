#include <iostream>

class Weapon
{
private:
    std::string     _type;

public:
    Weapon(const char *s) {this->_type = std::string(s);};
    ~Weapon() {}


    std::string const & getType(void) { return this->_type; };
    void setType(std::string s) { this->_type = s; };

};