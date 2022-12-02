/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 14:48:56 by aheddak           #+#    #+#             */
/*   Updated: 2022/12/02 16:31:54 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_fixedPoint = 0;
}

Fixed::Fixed(const int fixedPoint)
{
	std::cout << "Int constructor called" << std::endl;
	_fixedPoint = fixedPoint << _fract;
}

Fixed::Fixed(const float fixedPoint)
{
	std::cout << "Float constructor called" << std::endl;
	_fixedPoint = roundf(fixedPoint * (1 << _fract));
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called " << std::endl;
	*this = copy;
	// _fixedPoint = copy._fixedPoint;
}

Fixed& Fixed::operator = (const Fixed &obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_fixedPoint = obj.getRawBits();
	return (*this); 
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (_fixedPoint);
}

void	Fixed::setRawBits(int const raw)
{
	_fixedPoint = raw;
}

float Fixed::toFloat( void ) const
{
	return ((float)_fixedPoint / (1 << _fract));
}

int Fixed::toInt( void ) const
{
	return ((int)_fixedPoint / (1 << _fract));
}

std::ostream& operator<< (std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return os;
}