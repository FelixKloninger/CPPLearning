//Debugged using the debugger in Visual Studio. Code is from learncpp.com//
#include <iostream>

// Using debug tools I notice that the readNumber function is returning wrong//
int readNumber(int x)
{
	std::cout << "Please enter a number: ";
	std::cin >> x;
	return x;
}

void writeAnswer(int x)
{
	std::cout << "The sum is: " << x << '\n';
}

int main()
{
	int x{};
	readNumber(x);
	x = x + readNumber(x);
	writeAnswer(x);

	return 0;
}