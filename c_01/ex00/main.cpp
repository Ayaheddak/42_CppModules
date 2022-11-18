/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:47:43 by aheddak           #+#    #+#             */
/*   Updated: 2022/11/18 17:57:06 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
int main ()
{
	Zombie *z;

	randomChump("aya");
	z = newZombie("sousou");
	z->announce();
	delete(z);
	// system("leaks zombie");
}