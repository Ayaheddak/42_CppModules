/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 13:24:45 by aheddak           #+#    #+#             */
/*   Updated: 2022/11/19 19:22:24 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H
#include <iostream>
#include "Weapon.hpp"
class HumanA
{
	private :
		std::string name;
		Weapon	&weaponA;
	public:
		HumanA(std::string add, Weapon &type);
		void attack();
};

#endif