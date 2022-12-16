#include "Span.hpp"

Span::Span(void)
{
	this->_n = 0;
}

Span::Span(unsigned int n)
{
	this->_n = n;
}

Span::Span(const Span& copy)
{
	*this = copy;
}

Span& Span::operator= (const Span& obj)// if obj deja exist !!!
{
	this->_n = obj._n;
	this->_numbers.assign(obj._numbers.begin(), obj._numbers.end());
	return (*this);
}

Span::~Span()
{
	_numbers.clear();
}

const char * Span::NoSpaceException::what (void) const throw()
{
	return ("No space available in span !!");
}

void Span::addNumber(int n)
{
	if (_numbers.size() >= _n)
        throw NoSpaceException();
    _numbers.push_back(n);
}

const char * Span::EmptyVectorException::what (void) const throw()
{
	return ("Empty vector or has one element \n");
}

unsigned int Span::longestSpan(void)
{
	unsigned int rest = 0;
	std::vector<int> vect2;

	if (_numbers.size() == 1 || _numbers.size() == 0)
		throw EmptyVectorException();
	vect2 = _numbers;
	std::sort(vect2.begin(), vect2.end());
	rest = vect2.back() - vect2.front();
	vect2.clear();
	return(rest);
}

unsigned int Span::shortestSpan(void)
{
	std::vector<int> vect2;

	if (_numbers.size() == 1 || _numbers.size() == 0)
		throw EmptyVectorException();
	vect2 = _numbers;
	std::sort(vect2.begin(), vect2.end());
	unsigned int	rest = vect2[0];
	for (unsigned int i = 0; i < vect2.size() - 1 ; i++)
	{
		unsigned int tmp = vect2[i + 1] - vect2[i];
		if (rest > tmp)
			rest = tmp;
	}
	vect2.clear();
	return (rest);
}
std::vector<int>	Span::getNumbers(void)const
{
	return(_numbers);
}
void	Span::addrange(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	if (std::distance(start, end) + _numbers.size() >= _n)
        throw NoSpaceException();
	this->_numbers.insert(this->_numbers.end(), start, end);
}

