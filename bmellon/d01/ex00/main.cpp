/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 16:22:49 by bmellon           #+#    #+#             */
/*   Updated: 2020/10/04 16:25:08 by bmellon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

int	main(void)
{
	Pony popo = Pony("green");
	popo.PonyOnTheHeap();
	popo.PonyOnTheStack();
	return 1;
}