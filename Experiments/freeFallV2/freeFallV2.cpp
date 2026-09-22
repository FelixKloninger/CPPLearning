//This is a personal experiment and not assosiated with learncpp.com materials

#include <iostream>
#include <cmath>

double getTowerHeight()
{ 
	std::cout << "Enter the height of the tower in meters: ";
	double height{};
	std::cin >> height;
	return height;
}

int main()
{
	constexpr double gravity {9.80665};
	constexpr double physicsConstant {0.5};
	constexpr double timesTwo {2.0};
	int seconds{ 1 };
	double towerHeight = getTowerHeight();
	double ballHeight{ towerHeight };
	while (ballHeight > 0)
	{
		ballHeight = towerHeight - (physicsConstant * gravity * seconds * seconds);
		
		if (seconds == 1)
		{
			std::cout << "After " << seconds << " second the ball is at " << ballHeight << " meters.\n";
			++seconds;
		}		
		
		else if (ballHeight > 0)
		{
			std::cout << "After " << seconds << " seconds the ball is at " << ballHeight << " meters.\n";
			++seconds;
		}
		else
		{
			break;
		}
	}
	double impactTime{ std::sqrt((timesTwo * towerHeight) / gravity) };
	std::cout << "After " << impactTime << " seconds the ball hits the ground.\n";
	return 0;
}