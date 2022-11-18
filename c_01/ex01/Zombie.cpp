/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:47:32 by aheddak           #+#    #+#             */
/*   Updated: 2022/11/18 19:11:41 by aheddak          ###   ########.fr       */
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

void		Zombie::SetZombie(std::string str)
{
	name = str;
}

Zombie::Zombie()
{
	std::cout << "Hello\n";
}

Zombie::~Zombie()
{
	std::cout << name << " Good by \n";
}