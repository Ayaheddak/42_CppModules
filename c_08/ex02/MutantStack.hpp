#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <stack>
#include<iostream>
#include <deque>
#include <algorithm>
#include <vector>
template <typename T, typename container = std::deque<T> >
class MutantStack : public std::stack<T, container>
{
	public :
	MutantStack() {}
	MutantStack(const MutantStack &copy)
	{
		*this = copy;
	}
	MutantStack &operator=(const MutantStack &obj)
	{
		if (this == &obj)
			return *this;
		this->c = obj.c;
		return *this;
	}
	~MutantStack() {}
	typedef typename std::stack<T, container>::container_type::iterator iterator;
	typedef typename std::stack<T, container>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T, container>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T, container>::container_type::const_reverse_iterator const_reverse_iterator;
	iterator begin() { return std::stack<T, container>::c.begin(); }	
	const_iterator begin() const { return std::stack<T, container>::c.begin(); }
	iterator end() { return std::stack<T, container>::c.end(); }
	const_iterator end() const { return std::stack<T, container>::c.end(); }
};
#endif