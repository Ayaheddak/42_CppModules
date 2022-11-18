/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:47:47 by aheddak           #+#    #+#             */
/*   Updated: 2022/11/18 19:17:59 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *Add;
	int i;

	i = 0;
	(void)name;
	Add = new Zombie[N];
	while(i < N)
	{
		Add[i].SetZombie(name);
		i++;
	}
	return (Add);
}