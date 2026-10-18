#include <iostream>

void printChars()
{
	int count{ 1 };
	char c{ 'A' };
	while (true)
	{
		std::cout << c << ' ';
		std::cout << static_cast<int>(c) << ' ';

		if (count % 13 == 0)
		{
			std::cout << '\n';
		}

		if (c >= 'Z')
		{
			break;
		}
		++c;
		++count;
	}
}
int main() 
{
	printChars();
	
	return 0;
}