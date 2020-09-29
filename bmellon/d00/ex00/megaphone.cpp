/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 15:46:45 by bmellon           #+#    #+#             */
/*   Updated: 2020/09/28 15:59:35 by bmellon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <iostream>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	if (ac <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] >= 97 && av[i][j] <= 122)
				av[i][j] -= 32;
			j++;
		}
		i++;
	}
	i = 1;
	while (av[i])
		std::cout << av[i++];
	std::cout << "\n";
	return (1);
}