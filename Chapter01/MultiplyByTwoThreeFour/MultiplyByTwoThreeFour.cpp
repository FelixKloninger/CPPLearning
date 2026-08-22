#include <iostream>
// I will make a program that multiplies the number the user inputs and outputs the results//
int main()
{
	std::cout << "Please enter a integer:";
	
	int num{};
	std::cin >> num;
	// We multiply numbers and output the result//
	std::cout << "The double of " << num << " is " << num * 2 <<  '\n';
	std::cout << "The triple of " << num << " is " << num * 3 << '\n';
	std::cout << "The quadruple of " << num << " is " << num * 4 << '\n';

	return 0;
}