#include "easyfind.hpp"
#include <iostream>
#include <vector>

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Bad arguments, try again." << std::endl;
		return 1;
	}
	std::vector<int> v;
	for (int i = 0; i < 15; i++)
		v.push_back(i + 1);
	for (int f = 0; f < 15; f++)
		std::cout << v[f] << ", ";	
	std::cout << "\nSearching..." << std::endl;
	try
	{
		int x = std::strtod(argv[1], NULL);
		easyfind(v,x);
	}
	catch(std::exception &e)
	{
			std::cout << "Error: " << e.what() << std::endl;
	}
    return 0;
}
