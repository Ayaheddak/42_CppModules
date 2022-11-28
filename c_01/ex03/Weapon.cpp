/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slahrach <slahrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 13:24:30 by aheddak           #+#    #+#             */
/*   Updated: 2022/11/28 00:57:58 by slahrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void	Weapon::setType(const std::string &value)
{	
	type = value;
}

std::string & Weapon::getType()
{
	return (type);
}

Weapon::Weapon(std::string add):type(add)
{

}

Weapon::~Weapon()
{
	
}