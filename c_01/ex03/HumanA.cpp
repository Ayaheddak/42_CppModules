/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 13:23:08 by aheddak           #+#    #+#             */
/*   Updated: 2022/11/19 19:21:22 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string add, Weapon &type):name(add),weaponA(type)
{
	
}

void	HumanA::attack()
{
	std::cout << name << " attacks with their " << weaponA.getType() << std::endl;
}