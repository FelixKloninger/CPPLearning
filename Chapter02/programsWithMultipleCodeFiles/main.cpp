#include <iostream>
//The assignment is to split this Code into 2 Files//
// Dont forget to add the semicolon at the end of the function declaration//
int getInteger();

int main()
{
	int x{ getInteger() };
	int y{ getInteger() };

	std::cout << x << " + " << y << " is " << x + y << '\n';
	return 0;
}