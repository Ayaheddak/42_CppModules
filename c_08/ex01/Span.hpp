#ifndef SPAN_HPP
#define SPAN_HPP
#include <vector>
#include <iostream>
class Span
{
	private :
		unsigned int _n;
		std::vector<int> _numbers;
	public :
		Span(void);
		Span(unsigned int n);
		Span(const Span& copy);
		Span& operator= (const Span& obj);
		~Span(void);
		void addNumber(int n);
		unsigned int shortestSpan();
		unsigned int longestSpan();
		void	addrange(std::vector<int>::iterator start, std::vector<int>::iterator end);
		std::vector<int>	getNumbers(void)const;
		class EmptyVectorException : public std::exception
		{
			public :
				const char * what (void) const throw();
		};
		class NoSpaceException : public std::exception
		{
			public :
				const char * what (void) const throw();
		};
};
#endif