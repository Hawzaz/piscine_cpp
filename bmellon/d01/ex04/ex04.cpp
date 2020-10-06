/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 18:46:59 by bmellon           #+#    #+#             */
/*   Updated: 2020/10/05 18:58:22 by bmellon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
int main()
{
	std::string s = "HI THIS IS BRAIN";
	std::string *p = &s;
	std::string &r = s;
	std::cout << "POINTER " << *p << std::endl << "REFERENCE " << r <<std::endl;
	return 1;
}