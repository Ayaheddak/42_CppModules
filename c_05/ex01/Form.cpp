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

Form::Form(const Form& copy) :_name(copy._name), _sGrade(copy,_sGrade), _eGrade(copy.eGrade)
{
	*this = copy;
}

Form& Form::operator= (const Form& obj)
{
	this->_signed = obj._signed;
	return (*this);
}

Form::~Form()
{
	std::cout <<"form's destructor called \n";
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
		this->_signed = true;
	else
		throw GradeTooLowException();
}

std::ostream& operator<< (std::ostream& os, const Form& obj)
{
	os << obj.getName() << " " << obj.getEGrade() << obj.getSigned() << obj.getSGrade << std::endl;
	return os;
}