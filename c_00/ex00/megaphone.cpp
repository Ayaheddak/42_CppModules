/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:57:05 by aheddak           #+#    #+#             */
/*   Updated: 2022/11/09 18:22:41 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>// input output stream
/*
cout = character output
<< print to the terminal
cin = character input
>> read user input
std :: endl can be used to insert a new line
*/

int main (int ac , char **av)
{
	int	i;
	int	j;

	i = 1;
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (av[i])
		{
			j = 0;
			while (av[i][j])
			{
				std::cout << (char)toupper(av[i][j]);
				j++;
			}
			i++;
		}
		std::cout <<std::endl;
	}
}


