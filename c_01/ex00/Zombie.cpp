/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:18:59 by aheddak           #+#    #+#             */
/*   Updated: 2022/11/18 17:41:41 by aheddak          ###   ########.fr       */
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

Zombie::Zombie(std::string newname):name(newname)
{

}

Zombie::~Zombie()
{
	std::cout << name << " Good by \n";
}