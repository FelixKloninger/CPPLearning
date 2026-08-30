#include <iostream>
// I placed this half here because I wanted to split the code into 2 files//
int getInteger()
{
	std::cout << "Enter an integer: ";
	int x{};
	std::cin >> x;
	return x;
}
