#include <iostream>

int main()
{
    int row{ 1 };
    while (row <= 5)
    {

        int numberCounter{ row };
        int ws{ 5 - row };
		while (ws > 0)
        {
            std::cout << 'x' << ' ';
            --ws;
        }
        while (numberCounter >= 1)
        {
            std::cout << numberCounter << ' ';
            --numberCounter;
        }
        std::cout << '\n';
        ++row;
    } 

    return 0;
}