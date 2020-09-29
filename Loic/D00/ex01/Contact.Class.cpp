/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.Class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasse <lomasse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 16:03:16 by lomasse           #+#    #+#             */
/*   Updated: 2020/09/28 20:06:57 by lomasse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.Class.hpp"

int     Contact::_NbContact = 0;

Contact::Contact( void )
{
    // Contact::_NbContact += 1;
}

Contact::~Contact( void )
{
    Contact::_NbContact -= 1;
}

int         Contact::getNbContact( void )
{
    return (Contact::_NbContact);
}

void        Contact::incNbContact( void )
{
    Contact::_NbContact += 1;
}

void        DisplayNbCharacter(std::string str, unsigned int len)
{
    if (str.length() > len)
    {
        for (unsigned int i = 0; i < len - 1; i++)
            std::cout << str[i];
        std::cout << '.';
    }
    else
    {
        std::cout << str;
        for (unsigned int i = 0; i < len - str.length(); i++)
            std::cout << ' ';
    }
    std::cout << '|';
}

int         Contact::SearchContact( Contact contact[8] )
{
    (void)contact;
    if (Contact::getNbContact() == 0)
    {
        std::cout << "No Contact Enter";
    }
    else
    {
        std::cout << "|index     |first name|last name |nickname  |" << std::endl;
        for (int i = 0; i < Contact::getNbContact(); i++)
        {
            std::cout << '|';
            DisplayNbCharacter(contact[i]._Index, 10);
            DisplayNbCharacter(contact[i]._FirstName, 10);
            DisplayNbCharacter(contact[i]._LastName, 10);
            DisplayNbCharacter(contact[i]._NickName, 10);
            std::cout << std::endl;
        }
    }
    return (0);
}

void        Contact::AddContact( Contact contact[8] )
{
    (void)contact;
    if (Contact::getNbContact() < 8)
        Contact::incNbContact();
    else
        std::cout << "The Contact List is full" << std::endl;
}

std::string    Contact::GetField(void)
{
    std::string s;
    
    std::getline(std::cin >> std::ws, s);
    return (s);
}

void         Contact::NewContact( void )
{
    std::string  buffer;
    Contact::_NbContact += 1;

    this->_Index = (Contact::_NbContact - 1) + '0';
    std::cout << "First name : ";
    this->_FirstName = Contact::GetField();
    std::cout << "Last name : ";
    this->_LastName = Contact::GetField();
    std::cout << "Nick name : ";
    this->_NickName = Contact::GetField();
    std::cout << "Login : ";
    this->_Login = Contact::GetField();
    std::cout << "Postal Address : ";
    this->_PostalAddr = Contact::GetField();
    std::cout << "Email Address : ";
    this->_EmailAddr = Contact::GetField();
    std::cout << "Phone Number : ";
    this->_PhoneNumber = Contact::GetField();
    std::cout << "BirthDay : ";
    this->_Birthday = Contact::GetField();
    std::cout << "Favorite Meal : ";
    this->_Birthday = Contact::GetField();
    std::cout << "Underwear color : ";
    this->_Color = Contact::GetField();
    std::cout << "Darkest secret : ";
    this->_Secret = Contact::GetField();
}
