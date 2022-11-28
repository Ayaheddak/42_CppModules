/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slahrach <slahrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 13:24:40 by aheddak           #+#    #+#             */
/*   Updated: 2022/11/28 19:24:54 by slahrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANB_H
#define HUMANB_H
#include "Weapon.hpp"
#include <iostream>
class HumanB
{
	private :
		std::string name;
		Weapon	*weaponB;
	public :
		HumanB(std::string name);
		~HumanB();
		void	setWeapon(Weapon &w);
		std::string	getWeapon();
		void	attack();
};

#endif