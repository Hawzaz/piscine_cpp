/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 17:36:36 by bmellon           #+#    #+#             */
/*   Updated: 2020/09/29 21:00:24 by bmellon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP
#include <iostream>
#include <iomanip>

class Contact{

public:
	std::string	getFirstname(void) const;
	std::string	getLastname(void) const;
	std::string	getNickname(void) const;
	std::string	getLogin(void) const;
	std::string	getPostaladdr(void) const;
	std::string	getEmail(void) const;
	std::string	getPhone(void) const;
	std::string	getBirthday(void) const;
	std::string	getFavmeal(void) const;
	std::string	getUnderwearcolor(void) const;
	std::string	getDarkestSecret(void) const;

	void		setFirstname(std::string first_name);
	void		setLastname(std::string last_name);
	void		setNickname(std::string nickname);
	void		setLogin(std::string login);
	void		setPostaladdr(std::string postal_addr);
	void		setEmail(std::string email);
	void		setPhone(std::string phone);
	void		setBirthday(std::string birthday);
	void		setFavmeal(std::string fav_meal);
	void		setUnderwearcolor(std::string underwear_color);
	void		setDarkestsecret(std::string darkest_secret);
	static	int	nbcontact;
	Contact		add_contact(void);
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _login;
	std::string _postal_addr;
	std::string _email;
	std::string _phone;
	std::string _birthday;
	std::string _fav_meal;
	std::string _underwear_color;
	std::string _darkest_secret;

};

#endif