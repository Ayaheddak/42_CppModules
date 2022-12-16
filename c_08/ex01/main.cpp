#include "Span.hpp"

int main()
{
	try
	{
		Span sp = Span(10);
		std::vector<int> vec;
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		vec.push_back(1);
		vec.push_back(2);
		vec.push_back(3);
		vec.push_back(4);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		sp.addrange((vec.begin() + 1), vec.end() - 1);
		for(unsigned int i = 0; i < sp.getNumbers().size() ; i++)
		{
			std::cout << sp.getNumbers().at(i) << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}