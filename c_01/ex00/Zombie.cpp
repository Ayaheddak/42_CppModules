/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slahrach <slahrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:18:59 by aheddak           #+#    #+#             */
/*   Updated: 2022/11/28 00:40:48 by slahrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce( void )
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}
std::string	Zombie::GetZombie()
{
	return (name);
}

Zombie::Zombie(std::string& newname):name(newname)
{
		
}

Zombie::~Zombie()
{
	std::cout << name << " Good by \n";
}
