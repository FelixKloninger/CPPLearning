#include <bitset>
#include <iostream>

// "rotl" stands for "rotate left"
std::bitset<4> rotl(std::bitset<4> bits)
{
	// Your code here
	bool savedBit = bits.test(3); // We save the leftmost bit (bit 3)
	bits <<= 1; // We shift all bits to the left by 1
	bits.set(0, savedBit); // We set the saved bit to position 0 (the rightmost bit)
	return bits;
}

int main()
{
	std::bitset<4> bits1{ 0b0001 };
	std::cout << rotl(bits1) << '\n';

	std::bitset<4> bits2{ 0b1001 };
	std::cout << rotl(bits2) << '\n';

	return 0;
}