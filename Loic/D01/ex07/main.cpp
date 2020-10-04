/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasse <lomasse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 18:00:50 by lomasse           #+#    #+#             */
/*   Updated: 2020/10/04 18:39:22 by lomasse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
    if (argc != 4 || !argv[2] || !argv[3])
    {
        std::cout << "Invalid parameters : ./SedIsForLoooser [Str 1] [Str2]" << std::endl;
        return (1);
    }
    std::string check;
    unsigned int i = 0;
    std::ifstream file(argv[1]);
    std::string ofilename = std::string(argv[1]) + "Wesh";
    std::ofstream ofile(ofilename);
    std::string org = std::string(argv[2]);
    std::string rep = std::string(argv[3]);
    while (std::getline(file, check))
    {
        i = 0;
        while ((i = check.find(org, i)) < check.length())
        {
            check.replace(i, org.length(), rep);
            i += org.length();
        }
        std::cout << check << std::endl;
        ofile << check << std::endl;
    }
    ofile.close();
    return (0);
}