#include "PresidentialPardonForm.hpp"
PresidentialPardonForm::PresidentialPardonForm(void):Form("PresidentialPardonForm", 25, 5)
{
	std::cout << "PresidentialPardonForm constructor called\n";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):Form("PresidentialPardonForm", 25, 5)
{
	std::cout << "PresidentialPardonForm default constructor called\n";
	this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy):Form(copy.getName(), copy.getSGrade(),copy.getEGrade())
{
	std::cout << "PresidentialPardonForm Copy Constructor Called" << std::endl;
	*this = copy;
}

PresidentialPardonForm& PresidentialPardonForm::operator= (const PresidentialPardonForm& obj)
{
	std::cout << "ShrubberyCreationForm Copy assignment operator called " << std::endl;
	this->_target = obj._target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout <<" PresidentialPardonForm's destructor called \n";
}

std::string	PresidentialPardonForm::getTarget(void)const
{
	return (_target);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor)const
{
	if (this->getSigned() == false && executor.getGrade() > this->getEGrade())
		throw GradeTooLowException();
	std::cout << getTarget() << "has been pardoned by Zaphod Beeblebrox" << std::endl;
}