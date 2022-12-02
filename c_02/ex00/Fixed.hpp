/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 13:08:20 by aheddak           #+#    #+#             */
/*   Updated: 2022/12/02 14:39:17 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <string>
#include <iostream>

class Fixed
{
	private :
		int _fixedPoint;
		static const int _constInteger = 8;
	public :
		Fixed();
		Fixed(const Fixed &copy);
		Fixed& operator = (const Fixed &obj);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
};
/*
class Counter
private :
int count:
public :
	Counter operator ++()//another object
	{
		++count;
		return (Counter (count));
	}
	Counter operator --()//another object
	{
		--count;
		return (Counter (count));
	}
*/
#endif