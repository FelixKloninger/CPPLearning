#include <iostream>

// write your add function template here
template <typename T>
T add(T input1, T input2)
{
	return input1 + input2;
}

// write your mult function template here
template <typename T1, typename T2>
T1 mult(T1 input1, T2 input2)
{
	return input1 * input2;
}	

// write your sub function template here
template <typename T1, typename T2>
auto sub(T1 input1, T2 input2)
{
	return input1 - input2;
}

int main()
{
	std::cout << add(2, 3) << '\n';
	std::cout << add(1.2, 3.4) << '\n';

	std::cout << "\n";

	std::cout << mult(2, 3) << '\n';
	std::cout << mult(1.2, 3) << '\n';

	std::cout << "\n";

	std::cout << sub(3, 2) << '\n';
	std::cout << sub(3.5, 2) << '\n';
	std::cout << sub(4, 1.5) << '\n';

	return 0;
}