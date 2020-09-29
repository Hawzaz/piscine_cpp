/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 17:36:34 by bmellon           #+#    #+#             */
/*   Updated: 2020/09/29 21:10:21 by bmellon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

std::string Contact::getFirstname(void) const
{
	return this->_first_name;
}

std::string	Contact::getLastname(void) const
{
	return this->_last_name;
}

std::string	Contact::getNickname(void) const
{
	return this->_nickname;
}

std::string	Contact::getLogin(void) const
{
	return this->_login;
}

std::string	Contact::getPostaladdr(void) const
{
	return this->_postal_addr;
}

std::string	Contact::getEmail(void) const
{
	return this->_email;
}

std::string	Contact::getPhone(void) const
{
	return this->_phone;
}

std::string	Contact::getBirthday(void) const
{
	return this->_birthday;
}

std::string	Contact::getFavmeal(void) const
{
	return this->_fav_meal;
}

std::string	Contact::getUnderwearcolor(void) const
{
	return this->_underwear_color;
}

std::string	Contact::getDarkestSecret(void) const
{
	return this->_darkest_secret;
}

void		Contact::setFirstname(std::string first_name)
{
	this->_first_name = first_name;
}

void		Contact::setLastname(std::string last_name)
{
	this->_last_name = last_name;
}

void		Contact::setNickname(std::string nickname)
{
	this->_nickname = nickname;
}

void		Contact::setLogin(std::string login)
{
	this->_login = login;
}

void		Contact::setPostaladdr(std::string postal_addr)
{
	this->_postal_addr = postal_addr;
}

void		Contact::setEmail(std::string email)
{
	this->_email = email;
}

void		Contact::setPhone(std::string phone)
{
	this->_phone = phone;
}

void		Contact::setBirthday(std::string birthday)
{
	this->_birthday = birthday;
}

void		Contact::setFavmeal(std::string fav_meal)
{
	this->_fav_meal = fav_meal;
}

void		Contact::setUnderwearcolor(std::string underwear_color)
{
	this->_underwear_color = underwear_color;
}

void		Contact::setDarkestsecret(std::string darkest_secret)
{
	this->_darkest_secret = darkest_secret;
}

int			Contact::nbcontact = 0;



Contact Contact::add_contact(void)
{
	Contact ct;

	std::string		buff;
	Contact::nbcontact += 1;

	std::cout << "Input first name";
	std::getline(std::cin >> std::ws, buff);
	ct.Contact::setFirstname(buff);
	
	std::cout << "Input last name";
	std::getline(std::cin >> std::ws, buff);
	ct.Contact::setLastname(buff);
	
	std::cout << "Input Nickname";
	std::getline(std::cin >> std::ws, buff);
	ct.Contact::setNickname(buff);
	
	std::cout << "Input login";
	std::getline(std::cin >> std::ws, buff);
	Contact::setLogin(buff);
	
	std::cout << "Input postal address";
	std::getline(std::cin >> std::ws, buff);
	ct.Contact::setPostaladdr(buff);
	
	std::cout << "Input email";
	std::getline(std::cin >> std::ws, buff);
	ct.Contact::setEmail(buff);
	
	std::cout << "Input phone";
	std::getline(std::cin >> std::ws, buff);
	ct.Contact::setPhone(buff);

	std::cout << "Input birthday";
	std::getline(std::cin >> std::ws, buff);
	ct.Contact::setBirthday(buff);

	std::cout << "Input favorite meal";
	std::getline(std::cin >> std::ws, buff);
	ct.Contact::setFavmeal(buff);

	std::cout << "Input underwear color";
	std::getline(std::cin >> std::ws, buff);
	ct.Contact::setUnderwearcolor(buff);

	std::cout << "Input your darkest secret";
	std::getline(std::cin >> std::ws, buff);
	ct.Contact::setDarkestsecret(buff);

	return (ct);
}