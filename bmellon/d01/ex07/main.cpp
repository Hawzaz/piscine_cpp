/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 14:17:49 by bmellon           #+#    #+#             */
/*   Updated: 2020/10/07 16:53:56 by bmellon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int main(int ac, char **av)
{
	if (ac <= 3)
	{
		std::cout << "Error : wrong number of args please input [filename] [str to replace] [str to replace with]" << std::endl;
		return (1);
	}
	Sed s(av[1], av[2], av[3]);
	if (s.empty())
		return 1;
	s.repl();
	return 1;
}