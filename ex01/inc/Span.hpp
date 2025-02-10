#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>

class Span
{
	public:
		Span();
		Span(unsigned int N);
		Span(const Span &other);
		Span &operator=(const Span &other);
		~Span();

		void addNumber(int num);
		int shortestSpan();
		int longestSpan();
		void printSpan();

	private:
		unsigned int _N;
		std::vector<int> v;
};

#endif
