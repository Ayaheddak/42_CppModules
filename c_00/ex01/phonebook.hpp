/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:30:58 by aheddak           #+#    #+#             */
/*   Updated: 2022/11/16 14:52:15 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "contact.hpp"

class phonebook
{
	private :
		std::string First;
		std::string Last;
		std::string Name;
		std::string Dsecret;
		std::string	PNumber;
		contact		contacts[2];
	public :
		int		AddContact(int i);
		contact		GetContact(int i);
		void		GetFullInfo(int i, contact cont);
		void		displayContacts(int i, contact cont);
};
#endif