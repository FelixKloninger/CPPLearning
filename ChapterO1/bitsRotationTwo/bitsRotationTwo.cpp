#include <bitset>
#include <iostream>

// "rotl" stands for "rotate left"
std::bitset<4> rotl(std::bitset<4> bits)
{
	// Your code here
	std::bitset<4> bits1 = (bits << 1); //We shift the bits to the left by 1 position
	std::bitset<4> bits2 = (bits >> 3); //We shift the bits to the right by 3 positions
	return bits1 | bits2; //We merge the two bitsets using OR to get the result of our rotation
}

int main()
{
	std::bitset<4> bits1{ 0b0001 };
	std::cout << rotl(bits1) << '\n';

	std::bitset<4> bits2{ 0b1001 };
	std::cout << rotl(bits2) << '\n';

	return 0;
}