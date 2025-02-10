#include "Span.hpp"
#include <string> 
#include <algorithm> 


Span::Span() : _N(0) {}

Span::Span(unsigned int N) : _N(N) {}

Span::~Span()
{
}

void Span::addNumber(int num)
{
	if (v.size() >= _N)
		throw std::out_of_range("the list is full");
	v.push_back(num);
}

int	Span::longestSpan()
{
	std::sort(v.begin(), v.end());
	return v.back() - v.front();
}

int	Span::shortestSpan()
{
	std::reverse(v.begin(), v.end());
	int minRate = 999999;
	for (size_t i = 1; i < v.size(); i++)
		minRate = std::min(minRate, (v[i] - v[i + 1]));
	return minRate;
}

void Span::printSpan()
{
	std::reverse(v.begin(), v.end());
	for (size_t i = 0; i < v.size(); i++)
	{
		std::cout << v[i] << ", ";
	}
}
