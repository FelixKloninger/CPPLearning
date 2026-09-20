#include <iostream>

double inputNumber1()
{
	std::cout << "Enter your first floating point number: ";
	double num1;
	std::cin >> num1;
	return num1;
}

double inputNumber2()
{
	std::cout << "Enter your second floating point number: ";
	double num2;
	std::cin >> num2;
	return num2;
}

char inputOperator()
{
	std::cout << "Enter an operator (+, -, *, /): ";
	char op;
	std::cin >> op;
	return op;
}

double calculate(double num1, double num2, char op)
{
	if (op == '+')
		return num1 + num2;
	else if (op == '-')
		return num1 - num2;
	else if (op == '*')
		return num1 * num2;
	else if (op == 'x')
		return num1 * num2;
	else if (op == '/')
		return num1 / num2;
	else
		std::cout << '\n' << "Invalid operator. Please use +, -, *, or /.\n";
	return 0;
}
int main()
{
	double num1 {inputNumber1() };
	double num2 {inputNumber2() };
	char op {inputOperator() };
	double result {calculate(num1, num2, op) };
	std::cout << "Result: " << result << '\n';
	return 0;
}