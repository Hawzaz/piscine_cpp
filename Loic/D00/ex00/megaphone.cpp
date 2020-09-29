/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasse <lomasse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 15:42:06 by lomasse           #+#    #+#             */
/*   Updated: 2020/09/28 15:51:58 by lomasse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int     main(int argc, char **argv)
{
    int i;
    int j;
    
    if (argc < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    i = 1;
    while (i < argc)
    {
        j = 0;
        while (argv[i][j])
        {
	        if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
                argv[i][j] -= 32;
            j++;
        }
        std::cout << argv[i];
        i++;
    }
    std::cout << std::endl;
    return (0);
}