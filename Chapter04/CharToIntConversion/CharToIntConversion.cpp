#include <iostream>

int main() 
{
	std::cout << "Enter a character: ";
	char inputCharacter{};
	std::cin >> inputCharacter;
	
	// We convert the char into its ASCII value using static_cast explicitly
	   std::cout << "You entered " << "'" << inputCharacter << "' " << "which has ASCII code " << static_cast<int>(inputCharacter) << '.';
	  
	//Implicit conversion
	//int asciiValue {inputCharacter};
	//std::cout << "You entered " << "'" << inputCharacter << "' " << "which has ASCII code " << asciiValue << '.';

	return 0;
}