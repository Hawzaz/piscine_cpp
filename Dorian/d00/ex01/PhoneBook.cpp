#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    memset(this->buff, 0, 128);
    this->count = 0;
}

void PhoneBook::getInput(void)
{
    while (1)
    {
        std::cin >> this->buff;

        if (!strcmp(this->buff, "EXIT"))
            break ;
        else if (!strcmp(this->buff, "ADD"))
            PhoneBook::add();
        else if (!strcmp(this->buff, "SEARCH"))
            PhoneBook::search();
        memset(this->buff, 0, 128);
    }
}

std::string PhoneBook::getField(const char *field)
{
    std::string name;

    std::cout << field << std::endl;
    std::getline(std::cin >> std::ws, name);

    return (name);
}

const char *PhoneBook::getFieldName(int pos)
{
    static const char *s[] = {
        NULL, "first name:", "last name:", "nickname:", "login:",
        "postal address", "email address:", "phone number:",
        "birthday date:", "favorite meal:", "underwear color:",
        "darkest secret:",
    };

    return s[pos];
}

void PhoneBook::add(void)
{
    if (this->count == 8)
    {
        std::cout << "There is already 8 contacts sorry." << std::endl;
        return; 
    }
    for (int i = 1; i < 12; i++)
    {
        const char *fieldName = PhoneBook::getFieldName(i);
        this->arr[this->count].setInfo(getField(fieldName), i);
    }
    std::cout << this->count << std::endl;
    this->count += 1;
}

void PhoneBook::search(void)
{
    if (this->count == 0)
        return ;
    std::string s;

    s = this->arr[0].getPublicInfo();

    for (int i = 0; i < this->count; i++)
    {
        cout << 
    }

    std::cout << s << std::endl;
}