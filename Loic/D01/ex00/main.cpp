/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasse <lomasse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 14:41:28 by lomasse           #+#    #+#             */
/*   Updated: 2020/09/30 14:52:54 by lomasse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

void    ponyOnTheHeap(void)
{
    std::cout << "Heap pony soon" << std::endl;
    Pony    *HeapPony = new Pony();
    delete HeapPony;
}

void    ponyOnTheStack(void)
{
    std::cout << "Stack pony soon" << std::endl;
    Pony    StackPony;    
}

int main(void)
{
    ponyOnTheHeap();
    ponyOnTheStack();
    return (0);
}