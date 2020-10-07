/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 16:30:24 by bmellon           #+#    #+#             */
/*   Updated: 2020/10/04 16:31:42 by bmellon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void memoryLeak() {
	std::string*	panthere = new std::string("String panthere");
	std::cout << *panthere << std::endl;
	delete panthere;
}