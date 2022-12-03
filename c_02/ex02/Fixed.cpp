/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:25:32 by aheddak           #+#    #+#             */
/*   Updated: 2022/12/03 07:33:53 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	_fixedPoint = 0;
}

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
}

Fixed::Fixed(const int fixedPoint)
{
	_fixedPoint = fixedPoint << _fract;
}

Fixed::Fixed(const float fixedPoint)
{
	_fixedPoint = roundf(fixedPoint * (1 << _fract));
}

Fixed& Fixed::operator = (const Fixed &obj)
{
	_fixedPoint = obj.getRawBits();
	return (*this); 
}

Fixed::~Fixed()
{
	
}

int	Fixed::getRawBits(void) const
{
	return (_fixedPoint);
}

void	Fixed::setRawBits(int const raw)
{
	_fixedPoint = raw;
}

bool Fixed::operator ==(const Fixed &obj) const
{
	if (this->_fixedPoint == obj._fixedPoint)
		return (true);
	return (false);
}

bool Fixed::operator !=(const Fixed &obj) const
{
	if (this->_fixedPoint != obj._fixedPoint)
		return (true);
	return (false);
}

bool Fixed::operator >=(const Fixed &obj) const
{
	if (this->_fixedPoint >= obj._fixedPoint)
		return (true);
	return (false);
}

bool Fixed::operator <=(const Fixed &obj) const
{
	if (this->_fixedPoint <= obj._fixedPoint)
		return (true);
	return (false);
}

bool Fixed::operator <(const Fixed &obj) const
{
	if (this->_fixedPoint < obj._fixedPoint)
		return (true);
	return (false);
}

bool Fixed::operator >(const Fixed &obj) const
{
	if (this->_fixedPoint > obj._fixedPoint)
		return (true);
	return (false);
}

Fixed Fixed::operator+(const Fixed &obj) const
{
	Fixed	fixed;
	
	fixed._fixedPoint = this->_fixedPoint + obj._fixedPoint;
	return (fixed);
}

Fixed Fixed::operator-(const Fixed &obj) const
{
	Fixed	fixed;
	
	fixed._fixedPoint = this->_fixedPoint - obj._fixedPoint;
	return (fixed);
}

Fixed	Fixed::operator*(const Fixed &obj) const
{
	Fixed	fixed;
	
	fixed._fixedPoint = (this->_fixedPoint * obj._fixedPoint) / (1 << fixed._fract);
	return (fixed);
}

Fixed	Fixed::operator/(const Fixed &obj) const
{
	Fixed fixed;

	fixed._fixedPoint = (this->_fixedPoint / obj._fixedPoint) * (1 << fixed._fract);
	return (fixed);
}

Fixed	Fixed::operator--()
{
	(this->_fixedPoint)--;
	return (*this);
}

Fixed	Fixed::operator--(int)//a--;
{
	// Fixed &tmp = *this;
	Fixed tmp(*this);
	(this->_fixedPoint)--;
	return (tmp);
}

Fixed	Fixed::operator++()
{
	(this->_fixedPoint)++;
	return (*this);
}

Fixed	Fixed::operator++(int)//a++;
{
	Fixed tmp(*this);
	(this->_fixedPoint)++;
	return (tmp);
}
float Fixed::toFloat( void ) const
{
	return ((float)_fixedPoint / (1 << _fract));
}

int Fixed::toInt( void ) const
{
	return ((int)_fixedPoint / (1 << _fract));
}

Fixed& min(Fixed &f1, Fixed &f2)
{
	if (f1 > f2)
		return (f2);
	else
		return (f1);
}

Fixed const &Fixed::min(const Fixed &f1, const Fixed &f2)
{
	if (f1 > f2)
		return (f2);
	else
		return (f1);
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1 > f2)
		return (f1);
	else
		return (f2);
}

Fixed const &Fixed::max(const Fixed &f1, const Fixed &f2)
{
	if (f1 > f2)
		return (f1);
	else
		return (f2);
}

std::ostream& operator<< (std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return os;
}
