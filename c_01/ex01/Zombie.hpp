/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:50:05 by aheddak           #+#    #+#             */
/*   Updated: 2022/11/18 19:07:30 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>
class Zombie
{
	private :
		std::string name;
	public:
		void		announce( void );
		void		SetZombie(std::string str);
		std::string	GetZombie();
		Zombie();
		~Zombie();
};
Zombie* zombieHorde( int N, std::string name );
#endif