#include <iostream>

int input1()
{
	int input;
	std::cout << "Enter an integer: ";
	std::cin >> input;
	return input;
}

int input2()
{
	int input;
	std::cout << "Enter another integer: ";
	std::cin >> input;
	return input;
}

int main()
{
	int smaller {input1()};
	int larger {input2()};
	
	if (larger < smaller)
	{
		int temp {smaller}; //temp enters the scope and is initialized
		smaller = larger;
		larger = temp;

		std::cout << "Swapping the values" << '\n';
	} // temp goes out of scope and is destroyed

	std::cout << "The smaller value is: " << smaller << '\n';
	std::cout << "The larger value is: " << larger << '\n';

	return 0;
}
