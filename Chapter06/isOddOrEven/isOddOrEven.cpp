#include <iostream>

bool isOddOrEven(int number)
{
	if ((number % 2) == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int inputNumber()
{
	int number;
	std::cout << "Enter an integer: ";
	std::cin >> number;
	return number;
}

void outputResult(int number, bool isEven)
{
	if (isEven == true)
			{
		std::cout << number << " is even" << '\n';
	}
	else
	{
		std::cout << number << " is odd" << '\n';
	}
}

int main()
{
	int number = inputNumber();
	bool isEven = isOddOrEven(number);
	outputResult(number, isEven);
	return 0;
}