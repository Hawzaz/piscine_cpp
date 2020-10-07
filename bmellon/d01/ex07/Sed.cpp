/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 16:27:32 by bmellon           #+#    #+#             */
/*   Updated: 2020/10/07 16:52:08 by bmellon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

void	Sed::repl()
{
	std::ifstream f(this->_filename);
	std::ofstream of(this->_filename + ".replace");
	std::stringstream buffer;
	buffer << f.rdbuf();
	std::string filestr = buffer.str();
	std::size_t found;
	while ((found = filestr.find(this->_s1)))
		filestr.replace(found, this->_s1.length(), this->_s2);
	of << filestr << std::endl;
}

int			Sed::empty()
{
	if (this->_filename.empty() || this->_s1.empty() || this->_s2.empty())
	{
		std::cout << "Please provide valid strings or filename" << std::endl;
		return 1;
	}
	return 0;
}