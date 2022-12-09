#include "ShrubberyCreationForm.hpp"
ShrubberyCreationForm::ShrubberyCreationForm(void):Form("home", 145, 137)
{
	std::cout << "ShrubberyCreationForm constructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):Form("home", 145, 137)
{
	_target = target;
	std::cout << "ShrubberyCreationForm default constructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy):Form(copy.getName(), copy.getSGrade(), copy.getEGrade())
{
	std::cout << "ShrubberyCreationForm Copy Constructor Called" << std::endl;
	*this = copy;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator= (const ShrubberyCreationForm& obj)
{
	std::cout << "ShrubberyCreationForm Copy assignment operator called " << std::endl;
	this->_target = obj._target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout <<" ShrubberyCreationForm's destructor called \n";
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() == false && executor.getGrade() > this->getEGrade())
		throw GradeTooLowException();
	std::string extension("_shrubbery");
	std::ofstream	outfile(this->_target + extension);
	if (outfile.fail())
    {
        std::cout << "Cannot Create File \n";
        return;
    }
	outfile <<"		 *			"<< std::endl;
	outfile <<"		/.\\			"<< std::endl;
	outfile <<"       /*..\\			"<< std::endl;
	outfile <<"       /..*\\			"<< std::endl;
	outfile <<"      /.*..*\\			"<< std::endl;
	outfile <<"      /...*.\\			"<< std::endl;
	outfile <<"	 /..*....\\			"<< std::endl;
	outfile <<"	 ^^^[_]^^^		"<< std::endl;

	outfile << std::endl;
	outfile << std::endl;
	outfile <<"		 *			"<< std::endl;
	outfile <<"		/.\\			"<< std::endl;
	outfile <<"       /*..\\			"<< std::endl;
	outfile <<"       /..*\\			"<< std::endl;
	outfile <<"      /.*..*\\			"<< std::endl;
	outfile <<"      /...*.\\			"<< std::endl;
	outfile <<"	 /..*....\\			"<< std::endl;
	outfile <<"	 ^^^[_]^^^		"<< std::endl;

}