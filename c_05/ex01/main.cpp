/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 05:52:52 by aheddak           #+#    #+#             */
/*   Updated: 2022/12/09 18:31:46 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
int main ()
{
	try
	{
		Form form1("f1", 150, 150);
		Bureaucrat bure;
		std::cout << form1 << std::endl;
		form1.beSigned(bure);
		std::cout << form1 << std::endl;
		bure.signForm(form1);
		std::cout << bure << std::endl;
		std::cout << form1 << std::endl;
		bure.setGrade(151);
		form1.beSigned(bure);
		std::cout << form1 << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "Continue ! \n";
}