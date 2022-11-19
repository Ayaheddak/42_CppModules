/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 13:24:30 by aheddak           #+#    #+#             */
/*   Updated: 2022/11/19 21:35:11 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void	Weapon::setType(const std::string &value)
{	
	type = value;
}

std::string & Weapon::getType()
{
	std::cout << type <<std::endl;
	return (type);
}

Weapon::Weapon(std::string add):type(add)
{

}

Weapon::~Weapon()
{
	
}