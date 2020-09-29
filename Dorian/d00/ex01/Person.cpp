#include "Person.hpp"


int     Person::getNbInst(void){
    return Person::_nbInst;
}

void    Person::setInst(int n)
{
    Person::_nbInst = n;
}

void     Person::setInfo(const std::string s, int index)
{
    switch (index)
    {
        case 1:
            this->_firstName = s;
        case 2:
            this->_lastName = s;
        case 3:
            this->_nickname = s;
        case 4:
            this->_login = s;
        case 5:
            this->_postal = s;
        case 6:
            this->_email = s;
        case 7:
            this->_phoneNumber = s;
        case 8:
            this->_birthdayDate = s;
        case 9:
            this->_favoriteMeal = s;
        case 10:
            this->_underwear = s;
        case 11:
            this->_secret = s;
        default:
            ;
    }
}

std::string Person::getPublicInfo(void)
{
    return this->_firstName + ";" + this->_lastName + ";" + this->_nickname;
}

std::string Person::getTotalInfo(void)
{
    return this->_firstName + ";" + this->_lastName + ";" + this->_nickname
    + ";" + this->_login + ";" + this->_postal + ";" + this->_email + ";"
    + this->_phoneNumber + ";" + this->_birthdayDate + ";" + this->_favoriteMeal
    + ";" + this->_underwear + ";" + this->_secret;
}