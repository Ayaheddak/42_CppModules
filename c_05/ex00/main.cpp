/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 05:52:52 by aheddak           #+#    #+#             */
/*   Updated: 2022/12/09 18:10:13 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ()
{
	try
	{
		Bureaucrat buro("buro", 2);
		
		std::cout << buro.getGrade() << std::endl;
		buro.increment();
		std::cout << buro.getGrade() << std::endl;
		std::cout << buro << std::endl;
		buro.increment();
		std::cout << buro.getGrade() << std::endl;
		buro.increment();
		std::cout << buro.getGrade() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "Test !! \n";
}