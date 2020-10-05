/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasse <lomasse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 14:21:27 by lomasse           #+#    #+#             */
/*   Updated: 2020/10/05 15:30:51 by lomasse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include <iostream>

int main(int argc, char **argv)
{
    Human   Bob;
    
    std::string ActionName = "rangedAttack";
    std::string Target = "You !";
    
    Bob.action(ActionName, Target); 
    return (0);
}