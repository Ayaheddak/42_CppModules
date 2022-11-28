/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slahrach <slahrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 13:24:45 by aheddak           #+#    #+#             */
/*   Updated: 2022/11/28 00:59:54 by slahrach         ###   ########.fr       */
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
		HumanA(std::string add, Weapon &type);//add deconst
		void attack();
};

#endif