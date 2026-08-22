# include <iostream>

int main()
{
	// Add and subtract two user-provided numbers //
	std::cout << "Enter the first number: ";
	int num1{};
	std::cin >> num1;

	std::cout << "Enter the second number: ";
	int num2{};	
	std::cin >> num2;

	std::cout << "The sum of " << num1 << " and " << num2 << " is: " << num1 + num2 << ".\n";
	std::cout << "The difference of " << num1 << " and " << num2 << " is: " << num1 - num2 << ".\n";

	return 0;
}