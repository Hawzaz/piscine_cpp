/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyAwesomePhoneBook.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 17:23:20 by bmellon           #+#    #+#             */
/*   Updated: 2020/09/29 21:12:51 by bmellon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

void		search_contact(Contact contact[], int nbcontact)
{
	int			i = 0;
	int			index;
	int			nbsave;

	nbsave = nbcontact;
	std::string	buff;
	std::cout << "CONTACT LIST\n";
	std::cout << "     INDEX|FIRST NAME| LAST NAME|  NICKNAME|";
	while (nbcontact > 0)
	{
		
		std::cout << std::setw(10) << i;
		if (contact[i]._first_name.length() > 10)
			std::cout.write(contact[i]._first_name.c_str(), 9) << ".";
		else
			std::cout << std::setw(10) << contact[i]._first_name;
		if (contact[i]._first_name.length() > 10)
			std::cout.write(contact[i]._last_name.c_str(), 9) << ".";
		else
			std::cout << std::setw(10) << contact[i]._last_name;
		if (contact[i]._nickname.length() > 10)
			std::cout.write(contact[i]._nickname.c_str(), 9) << "." << std::endl;
		else
			std::cout << std::setw(10) << contact[i]._nickname << std::endl;
		i++;
		nbcontact--;
	}
	std::cout << "DESIRED INDEX";
	std::cin >> index;
	if (index > 0 && index < nbsave)
	{
		std::cout << "first name :" << contact[index - 1]._first_name << std::endl;
		std::cout << "last name :" << contact[index - 1]._last_name << std::endl;
		std::cout << "nickname :" << contact[index - 1]._nickname << std::endl;
		std::cout << "login :" << contact[index - 1]._login << std::endl;
		std::cout << "postal address :" << contact[index - 1]._postal_addr << std::endl;
		std::cout << "email :" << contact[index - 1]._email << std::endl;
		std::cout << "phone :" << contact[index - 1]._phone << std::endl;
		std::cout << "birthday :" << contact[index - 1]._birthday << std::endl;
		std::cout << "favorite meal :" << contact[index - 1]._fav_meal << std::endl;
		std::cout << "underwear color :" << contact[index - 1]._underwear_color << std::endl;
		std::cout << "darkest secret :" << contact[index - 1]._darkest_secret << std::endl;
	}
	else
		std::cout << "BIP BOOP : YOUR AWESOME PHONEBOOK DOESNT WORK LIKE THIS";
}

int main(int argc, char const *argv[])
{
	(void)argv;
	int			alive = 1;
	std::string	buff;
	Contact contact[8];
	if (argc > 2)
		std::cout << "BIP BOOP : YOUR AWESOME PHONEBOOK DOESNT WORK LIKE THIS";
	while (alive)
	{	
		std::getline(std::cin >> std::ws, buff);
		if (buff.compare("ADD") && Contact::nbcontact < 8)
			contact[Contact::nbcontact].add_contact();
		else if (buff.compare("SEARCH"))
			search_contact(contact, Contact::nbcontact);
		else if (buff.compare("EXIT"))
			alive = 0;	
	}	
	return 0;
}