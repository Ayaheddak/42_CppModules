/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:25:42 by aheddak           #+#    #+#             */
/*   Updated: 2022/12/02 16:44:22 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <string>
#include <iostream>
#include <cmath>
class Fixed
{
	private :
		static int _fixedPoint;
		static const int _fract = 8;
	public :
		Fixed();
		Fixed(const Fixed &copy);
		// Fixed& operator = (const Fixed &obj);
		~Fixed();
		int getRawBits(void);
		void setRawBits(int const raw);
		void operator++ (void);
		void display()
		{
        	std::cout << "Count: " << _fixedPoint << std::endl;
    	}
};
#endif