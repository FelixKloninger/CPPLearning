#include <iostream>

int doubleNumber(int num) {
	return num * 2;
}

int main() 
{	

	std::cout << "Enter a number" << '\n';
	int inputNumber{};
	std::cin >> inputNumber;
	std::cout << "Double that is:" << doubleNumber(inputNumber) << '\n';
}
