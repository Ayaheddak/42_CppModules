/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:48:39 by aheddak           #+#    #+#             */
/*   Updated: 2022/11/17 07:01:55 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"
int main ()
{
	std::string cmd;
	phonebook info;
	contact cont;
	std::string str;
	int	i;
	int count;

	i = 0;
	count = 0;
	while (!std::cin.eof())
	{
		std::cout << "Enter ur choice (ADD, SEARCH , EXIT) : ";
		std::getline(std::cin, cmd);
		if (cmd == "EXIT")
			return (0);
		else if (cmd == "ADD")
		{
			if (i >= 8)
				i = 0;
			if (info.AddContact(i) == 1)
			{
				if (count < 8)
					count++;
				i++;
			}
		}
		else if (cmd == "SEARCH")
		{
			info.displayContacts(cont, count);
			if (count != 0)
				info.GetFullInfo(count ,cont);
		}
		else
			std::cout << "Invalid command!" << std::endl;
	}
}
