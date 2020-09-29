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
        std::cout << "^_^ ";
        std::cin >> this->buff;

        if (!strcmp(this->buff, "EXIT"))
            break ;
        else if (!strcmp(this->buff, "ADD"))
            PhoneBook::add();
        else if (!strcmp(this->buff, "SEARCH"))
            PhoneBook::search();
        else
            std::cout << "Command not found." << std::endl;
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
    this->count += 1;
}

void PhoneBook::search(void)
{
    if (this->count == 0)
    {
        std::cout << "No contact found." << std::endl;
        return ;
    }
    std::string s;
    std::string tok;
    size_t pos = 0;

    std::cout << std::setw(10) << "index" << "|";
    std::cout << std::setw(10) << "first name" << "|";
    std::cout << std::setw(10) << "last name" << "|";
    std::cout << std::setw(10) << "nickname" << std::endl;
    for (int i = 0; i < this->count; i++)
    {
        s = this->arr[i].getPublicInfo();

        std::cout << std::setw(10) << i + 1 << "|";
        while ((pos = s.find(";")) != std::string::npos)
        {
            tok = s.substr(0, pos);
            if (tok.length() > 10)
            {
                tok.erase(9, tok.size());
                tok += ".";
            }
            std::cout << std::setw(10) << tok << "|";
            s.erase(0, pos + 1);
        }
        if (s.length() > 10)
        {
            s.erase(9, s.size());
            s += ".";
        }
        std::cout << std::setw(10) << s << std::endl;
    }
    this->SearchPerson();
}

void PhoneBook::SearchPerson(void)
{
    std::string s;
    std::string tok;
    size_t      pos = 0;
    int         i = 1;

    std::cout << "choose an index" << " [";
    for (int i = 1; i <= this->count; i++)
        std::cout << i << " ";
    std::cout << "]" << std::endl;

    std::getline(std::cin >> std::ws, s);
    if (std::stoi(s) < 0 || std::stoi(s) > this->count)
    {
        std::cout << "Invalid index" << std::endl;
        return ;
    }
    s = this->arr[std::stoi(s) - 1].getTotalInfo();
    while ((pos = s.find(";")) != std::string::npos)
    {

        tok = s.substr(0, pos);
        std::cout << std::setw(17) << this->getFieldName(i) << " ";
        std::cout << tok << std::endl;
        s.erase(0, pos + 1);
        i++;
    }
    std::cout << std::setw(17) << this->getFieldName(i) << " ";
    std::cout << tok << std::endl;
}