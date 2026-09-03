#include <iostream>

//Function readNumber
int readNumber()
{
	int x {};
	std::cin >> x;
	int y {};
	std::cin >> y;
	
	std::cout << "The sum of the two numbers is: ";
	return x + y;
}

void writeAnwser()
{
	std::cout << readNumber() << '\n';
}

int main()
{
	std::cout << "Enter two Numbers to add together:" << '\n';
	writeAnwser();

	return 0;
}