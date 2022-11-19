/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 13:24:40 by aheddak           #+#    #+#             */
/*   Updated: 2022/11/19 21:36:48 by aheddak          ###   ########.fr       */
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
		void	setWeapon(Weapon &w);
		std::string	getWeapon();
		void	attack();
};

#endif