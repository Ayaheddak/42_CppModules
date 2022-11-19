/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 13:24:42 by aheddak           #+#    #+#             */
/*   Updated: 2022/11/19 21:36:57 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
HumanB::HumanB(std::string n):name(n)
{
	
}

void HumanB::setWeapon(Weapon &w)
{
	// new Weapon(w);
	// w = new HumanB();
	weaponB = &w;
}
// std::string	HumanB::getWeapon()
// {
// 	return(weaponB->getType());
// }
void	HumanB::attack()
{
	std::cout << name << " attacks with their " << weaponB->getType() << std::endl;
}