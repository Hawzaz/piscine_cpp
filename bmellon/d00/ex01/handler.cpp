/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handler.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 17:23:20 by bmellon           #+#    #+#             */
/*   Updated: 2020/09/28 20:25:40 by bmellon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

int main(int argc, char const *argv[])
{
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
			Contact::searchcontact();
		else if (buff.compare("EXIT"))
			alive = 0;	
	}	
	return 0;
}
