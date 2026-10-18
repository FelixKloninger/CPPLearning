#include <iostream>

int input()
{ 
	std::cout << "Enter number: ";
	
	int num;
	std::cin >> num;
	
	return num;
}

char inputOp()
{
	std::cout << "Enter operator (+, -, *, /): ";
	
	char op;
	std::cin >> op;

	return op;
}

int calculate(int num1, char op, int num2)
{
	switch (op)
	{
	case '+':
		return num1 + num2;
	case '-':
		return num1 - num2;
	case '*':
		return num1 * num2;
	case '/':
		return num1 / num2;
	default:
		std::cout << "Invalid operator\n";
	}
	return 0;
}

int main()
{
	int num1{ input() };
	char op{ inputOp() };
	int num2{ input() };
	
	int result{ calculate(num1, op, num2) };
	std::cout << num1 << " " << op << " " << num2 << " = " << result << '\n';
	return 0;
}