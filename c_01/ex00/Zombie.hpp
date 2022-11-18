/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:19:04 by aheddak           #+#    #+#             */
/*   Updated: 2022/11/18 17:26:25 by aheddak          ###   ########.fr       */
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