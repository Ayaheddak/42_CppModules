/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slahrach <slahrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 13:24:42 by aheddak           #+#    #+#             */
/*   Updated: 2022/11/28 19:25:53 by slahrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
HumanB::HumanB(std::string n):name(n)
{
	
}

void HumanB::setWeapon(Weapon &w)
{
	weaponB = &w;
}

void	HumanB::attack()
{
	std::cout << name << " attacks with their " << weaponB->getType() << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "Deconstructor called" << std::endl;
}