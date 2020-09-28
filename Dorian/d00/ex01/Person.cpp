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
            this->firstName = s;
        case 2:
            this->lastName = s;
        case 3:
            this->nickname = s;
        case 4:
            this->login = s;
        case 5:
            this->postal = s;
        case 6:
            this->email = s;
        case 7:
            this->phoneNumber = s;
        case 8:
            this->birthdayDate = s;
        case 9:
            this->favoriteMeal = s;
        case 10:
            this->underwear = s;
        case 11:
            this->secret = s;
        default:
            ;
    }
}

std::string Person::getPublicInfo(void)
{
    return this->firstName + ";" + this->lastName + ";" + this->nickname;
}
