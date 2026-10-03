#include <iostream>
#include <string>
#include <string_view>

// Write the function getQuantityPhrase() here
std::string getQuantityPhrase(int quantity)
{
	if (quantity < 0)
	{
		return "negative";
	}
	else if (quantity == 0)
	{
		return "no";
	}
	else if (quantity == 1)
	{
		return "a single";
	}
	else if (quantity == 2)
	{
		return "a couple of";
	}
	else if (quantity == 3)
	{
		return "a few";
	}
	else if (quantity >= 4)
	{
		return "many";
	}
	else
	{
		return "error";
	}
}

// Write the function getApplesPluralized() here

std::string getApplesPluralized(int quantity)
{
	return (quantity == 1) ? "apple" : "apples";
}


int main()
{
    constexpr int maryApples{ 3 };
    std::cout << "Mary has " << std::string_view(getQuantityPhrase(maryApples)) << ' ' << getApplesPluralized(maryApples) << ".\n";

    std::cout << "How many apples do you have? ";
    int numApples{};
    std::cin >> numApples;

    std::cout << "You have " << std::string_view(getQuantityPhrase(numApples)) << ' ' << getApplesPluralized(numApples) << ".\n";

    return 0;
}