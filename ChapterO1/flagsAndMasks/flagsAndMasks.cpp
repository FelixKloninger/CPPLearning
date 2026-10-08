#include <bitset>
#include <cstdint>
#include <iostream>

int main()
{
    // We can see masks that store boolean values and we have to manipulate them
    [[maybe_unused]] constexpr std::uint8_t option_viewed{ 0x01 }; // 0000'0001
    [[maybe_unused]] constexpr std::uint8_t option_edited{ 0x02 }; // 0000'0010
    [[maybe_unused]] constexpr std::uint8_t option_favorited{ 0x04 }; // 0000'0100
    [[maybe_unused]] constexpr std::uint8_t option_shared{ 0x08 }; // 0000'1000
    [[maybe_unused]] constexpr std::uint8_t option_deleted{ 0x10 }; // 0001'0000

    std::uint8_t myArticleFlags{ option_favorited };

    // Place all lines of code for the following quiz here
	
    myArticleFlags |= option_viewed; // With or we can set the bit to 1
    
    myArticleFlags &= ~option_favorited; // We clear the favorited bit using and with not and and operator

    std::cout << std::bitset<8>{ myArticleFlags } << '\n';
	
    if (myArticleFlags & option_deleted)
	{
		std::cout << "The post was deleted \n";
	}
    else
    {
		std::cout << "The post was not deleted \n";
    }
    
    return 0;
}