#include "Span.hpp"
#include <iostream> 
#include <string>
#include <climits>

int main()
{
	Span sp(8);
	try
	{

		sp.addNumber(-9);
		sp.addNumber(0);
		sp.addNumber(99);
		sp.addNumber(9);
		sp.addNumber(30);
		sp.addNumber(15);
		std::cout << sp.longestSpan() << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
		
	sp.printSpan();
}
