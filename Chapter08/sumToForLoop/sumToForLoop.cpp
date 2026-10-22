#include <iostream>

int sumTo(int value)
{ 
	int sum {value};
	for (int i{value - 1}; i > 0; --i)
	{
		sum += i;
	}
	return sum;
}




int main()
{
	std::cout << "Enter a positive integer: ";
	int value{};
	std::cin >> value;
	std::cout << sumTo(value) << '\n';
	return 0;
}
