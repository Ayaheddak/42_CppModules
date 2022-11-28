/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slahrach <slahrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:19:04 by aheddak           #+#    #+#             */
/*   Updated: 2022/11/28 00:46:00 by slahrach         ###   ########.fr       */
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
		std::string	GetZombie();
		Zombie(std::string newname);
		~Zombie();
};

Zombie* newZombie( std::string name );
void	randomChump( std::string name );
#endif