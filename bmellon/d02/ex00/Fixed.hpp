/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 22:21:50 by bmellon           #+#    #+#             */
/*   Updated: 2020/10/10 22:21:50 by bmellon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int _fixed;
		static const int _bits = 8;
	protected:
		/* protected */
	public:
		Fixed();
		Fixed(Fixed const & src);
		Fixed & operator=(Fixed const & rhs);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw);
};

#endif
