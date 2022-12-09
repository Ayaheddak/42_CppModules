#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"
class Bureaucrat;
class PresidentialPardonForm : public Form
{
	private :
		std::string _target;
	public :
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm& copy);
		PresidentialPardonForm& operator= (const PresidentialPardonForm& obj);
		~PresidentialPardonForm(void);
		std::string	getTarget(void);
		void execute(Bureaucrat const & executor);
};
#endif