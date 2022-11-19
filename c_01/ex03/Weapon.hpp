/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 13:24:19 by aheddak           #+#    #+#             */
/*   Updated: 2022/11/19 21:34:51 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WEAPON_H
#define WEAPON_H
#include <iostream>
class Weapon
{
	private:
		std::string type;
	public:
		Weapon(std::string add);
		~Weapon();
		void	setType(const std::string &value);
		std::string & getType();
};

#endif