/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasse <lomasse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 15:58:59 by lomasse           #+#    #+#             */
/*   Updated: 2020/09/28 19:51:15 by lomasse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.Class.hpp"

int     ParsingCommand(Contact contact[8], std::string command)
{
    if (!command.compare("ADD") && Contact::getNbContact() < 8)
    {
        contact[Contact::getNbContact()].NewContact();
    }
    else if (!command.compare("SEARCH"))
    {
        contact->Contact::SearchContact(contact);
    }
    else if (!command.compare("EXIT"))
        return (1);
    else
        std::cout << "No Keyword found : Use ADD, SEARCH or EXIT" << std::endl;
    return (0);
}

int     main(void)
{
    Contact         contact[8];
    std::string     command;

    while (1)
    {
        std::cout << std::endl << "$>";
        std::cin >> command;
        if (ParsingCommand(contact, command))
        {
            std::cout << "Exit the PhoneBook";
            return (0);
        }
    }
    return (0);
}