/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasse <lomasse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 16:03:28 by lomasse           #+#    #+#             */
/*   Updated: 2020/09/30 16:04:57 by lomasse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void        memoryLeak()
{
    std::string*        panthere = new std::string("String panthere");

    std::cout << *panthere << std::endl;
    delete panthere;
}
