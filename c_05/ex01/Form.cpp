#include "Form.hpp"
Form::Form(void) : _name("form"), _sGrade(15), _eGrade(10)
{
	std::cout << "Form's default constructor called\n";
	this->_signed = false;
}

Form::Form(std::string name, int signedGrade, int executedGrade) : _name(name), _sGrade(signedGrade), _eGrade(executedGrade)
{
	this->_signed = false;
}

Form& Form::operator= (const Form& obj)
{
	this->_signed = copy._signed;
	return (*this);
}

Form::Form(const Form& copy) :_name(copy._name), _sGrade(copy,_sGrade), _eGrade(copy.eGrade)
{
	*this = form;
}

Form::~Form()
{
	std::cout <<"form's destrocter called \n";
}

int	Form::getSignedGrade( void ) const
{
	return (this->_signedGrade);
}

std::string Form::getName( void ) const
{
	return (this->_name);
}

bool Form::getSigned( void ) const
{
	return (this->_signed);
}

int	Form::getSGrade( void ) const
{
	return (this->_sGrade);
}

int	Form::getEGrade(void)const
{
	return (this->_eGrade);
}

const char * Form::GradeTooHighException::what (void) const throw()
{
	return "Error: Grade Too high ! ";
}

const char * Form::GradeTooLowException::what (void) const throw()
{
	return "Error: Grade Too low ! ";
}


void	Form::beSigned(Bureaucrat &bur)
{
	if (bur.getGrade <= _sGrade)
	{
		if (this->_signed == true)
			this->_signed = false
		else
			this->_signed = true;
	}
	else
		throw GradeTooLowException();
}
// std::ostream& operator<< (std::ostream& os, const Form& obj)
// {
// 	os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
// 	return os;
// }