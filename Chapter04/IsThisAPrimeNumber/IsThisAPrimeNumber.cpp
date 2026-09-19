#include <iostream>

// We want to check if a number is a prime or not (0-9)
// We will use a function to check if the number is prime or not
bool isPrime(int x)
{
	if (x == 2)
		return true;
	else if (x == 3)
		return true;
	else if (x == 5)
		return true;
	else if (x == 7)
		return true;
	else
		return false;
}

int main()
{
	std::cout << "Enter a number between 0 and 9: ";
	int x{};
	std::cin >> x;
	// Check if the number provided is a prime or not
	if (isPrime(x))
		std::cout << "The number is prime" << '\n';
	else
		std::cout << "The number is not prime" << '\n';
	return 0;
}