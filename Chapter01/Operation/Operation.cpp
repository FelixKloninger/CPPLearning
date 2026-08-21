# include <iostream>

int main()
{
	//As a excersise Í will create a simple kind of calculator that will print basic operations// 
	std::cout << "Enter a number: " << '\n';
	int num1{};
	std::cin >> num1;

	std::cout << "Enter another number: " << '\n';
	int num2{};
	std::cin >> num2;
	
	std::cout << "Addition: " << num1 + num2 << '\n';
	std::cout << "Subtraction: " << num1 - num2 << '\n';
	std::cout << "Multiplication: " << num1 * num2 << '\n';
	std::cout << "Division: " << num1 / num2 << '\n';

	return 0;
}