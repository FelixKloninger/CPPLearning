#include <iostream>

double inputHeight()
{
	std::cout << "Enter the height of the tower in meters: ";
	double height;
	std::cin >> height;
	return height;
}

double calculation(double height, double timeTaken)
{
	double position {height - 0.5 * 9.8 * timeTaken * timeTaken};
	if (position < 0)
		std::cout << "At " << timeTaken << " seconds, the ball has hit the ground." << '\n';
	else
		std::cout << "At " << timeTaken << " seconds, the ball is at height: " << position << " meters" << '\n';
	return position;
}


void printHeight(double height)
{ 
	calculation(height, 0);
	calculation(height, 1);
	calculation(height, 2);
	calculation(height, 3);
	calculation(height, 4);
	calculation(height, 5);
}

int main()
{
	double height {inputHeight()};
	printHeight(height);
	return 0;
}