#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T arr, int b)
{
	//std::vector<int> arr;
	typename T::iterator iterFound = std::find(arr.begin(), arr.end(), b);
	if (iterFound == arr.end())
			throw std::runtime_error("Element not found");
	else
			std::cout << "Element " << *iterFound << " founded" << std::endl;
	return iterFound;
}

#endif
