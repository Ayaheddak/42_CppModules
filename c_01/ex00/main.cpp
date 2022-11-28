/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slahrach <slahrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:47:43 by aheddak           #+#    #+#             */
/*   Updated: 2022/11/28 19:23:08 by slahrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
int main ()
{
	Zombie *z;

	randomChump(NULL);
	z = newZombie("sousou");
	z->announce();
	delete(z);
}