/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:25:42 by aheddak           #+#    #+#             */
/*   Updated: 2022/12/03 07:24:31 by aheddak          ###   ########.fr       */
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
		int _fixedPoint;
		static const int _fract = 8;
	public :
		Fixed();
		Fixed(const Fixed &copy);
		Fixed(const int fixedPoint);
		Fixed(const float fixedPoint);
		Fixed& operator = (const Fixed &obj);
		bool operator ==(const Fixed &obj) const;
		bool operator !=(const Fixed &obj) const;
		bool operator >=(const Fixed &obj) const;
		bool operator <=(const Fixed &obj) const;
		bool operator <(const Fixed &obj) const;
		bool operator >(const Fixed &obj) const;
		Fixed operator+(const Fixed &obj) const;
		Fixed operator-(const Fixed &obj) const;
		Fixed operator*(const Fixed &obj) const;
		Fixed operator/(const Fixed &obj) const;
		Fixed operator--() ;
		Fixed operator--(int);
		Fixed operator++();
		Fixed operator++(int);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat( void ) const;
		int toInt( void ) const;
		static Fixed& min(Fixed &f1, Fixed &f2);
		static Fixed const &min(const Fixed &f1, const Fixed &f2);
		static Fixed& max(Fixed &f1, Fixed &f2);
		static Fixed const &max(const Fixed &f1, const Fixed &f2);
		~Fixed();
};

std::ostream& operator<< (std::ostream& os, const Fixed& obj);
#endif