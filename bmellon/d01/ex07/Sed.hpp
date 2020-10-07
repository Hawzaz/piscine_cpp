/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 14:21:08 by bmellon           #+#    #+#             */
/*   Updated: 2020/10/07 16:44:48 by bmellon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

class Sed
{
	public:
		Sed(std::string filename, std::string s1, std::string s2) : _filename(filename), _s1(s1), _s2(s2) {};
		void repl();
		int		empty();
	private:
		std::string _filename;
		std::string _s1;
		std::string _s2;
};