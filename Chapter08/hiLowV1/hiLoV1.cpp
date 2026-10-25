#include "Random_H.h"
#include <iostream>

char getUserInputChar()
{
	char userInput;
	std::cin >> std::ws >> userInput;
	while (std::cin.fail())
	{
		
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> std::ws >> userInput;
	}
	return userInput;
}

int getUserInput()
{
	int userInput;
	std::cin >> std::ws >> userInput;
	while (std::cin.fail())
	{

		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid input. Please enter a number: ";


		std::cin >> std::ws >> userInput;
	}
	return userInput;
}
char game()
{
	std::cout << "Let's play a game. I'm thinking of a number between 1 and 100. You have 7 tries to guess what it is. \n";

	int answer{ Random::get(1, 100) };

	for (int iteration {1}; iteration <= 7; ++iteration)
	{
		std::cout << "Guess number #" << iteration << ": ";
		int userInput = getUserInput();

		 if (userInput == answer)
		{
			std::cout << "Correct! You win!\n";
			break;
		}
		else if (userInput < answer)
		{
			std::cout << "Your guess is too low.\n";
			if (iteration == 7)
			{
				std::cout << "Game over! The number was " << answer << ".\n";
			}
		}
		else if (userInput > answer)
		{
			std::cout << "Your guess is too high.\n";
			if (iteration == 7)
			{
				std::cout << "Game over! The number was " << answer << ".\n";
			}
		}
		
	}
	 while (true)
	{
		std::cout << "Would you like to play again(y / n) ?";
		char c{ getUserInputChar() };
		if (c == 'y' || c == 'Y')
		{
		 game();
		 }
		 else if (c == 'n' || c == 'N')
		 {
		 std::cout << "Thank you for playing!\n";
			 return 'n';
		 }
		 else
		 {
			 std::cout << "Invalid input. Please enter 'y' or 'n'.\n";
		 }
	}
}

int main()
{
	if (game() == 'n')
	{
		return 0;
	}
}