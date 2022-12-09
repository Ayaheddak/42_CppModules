/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 05:52:52 by aheddak           #+#    #+#             */
/*   Updated: 2022/12/07 06:08:30 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ()
{
	try
	{
		Bureaucrat burro("aywa", 0);
		std::cout << "say something\n";
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
}