#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"
class Bureaucrat;
class ShrubberyCreationForm : public Form
{
	private :
		std::string _target;
	public :
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm& copy);
		ShrubberyCreationForm& operator= (const ShrubberyCreationForm& obj);
		void execute(Bureaucrat const & executor) const;
		~ShrubberyCreationForm(void);
};
#endif