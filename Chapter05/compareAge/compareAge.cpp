#include <iostream>
#include <string>
#include <string_view>


// We will try to compare the ages of two people and print out who is older
std::string person1Name()
{
	std::cout << "Enter the name of person #1: ";
	std::string name;
	std::getline(std::cin >> std::ws, name);
	return name;
}

int person1Age()
{
	std::cout << "Enter the age of person #1: ";
	int age;
	std::cin >> age;
	return age;
}

std::string person2Name()
{
	std::cout << "Enter the name of person #2: ";
	std::string name;
	std::getline(std::cin >> std::ws, name);
	return name;
}

int person2Age()
{
	std::cout << "Enter the age of person #2: ";
	int age;
	std::cin >> age;
	return age;
}

void print(std::string_view name1, int age1, std::string_view name2, int age2)
{
	if (age1 > age2)
	{
		std::cout << name1 << " (" << age1 << ") is older than " << name2 << " (" << age2 << ")" << '\n';
	}

	else if (age1 < age2)
	{
		std::cout << name2 << " (" << age2 << ") is older than " << name1 << " (" << age1 << ")" << '\n';
	}

	else
	{
		std::cout << name1 << " (" << age1 << ") and " << name2 << " (" << age2 << ") are the same age" << '\n';
	}
}

int main()
{ 
	//We get the names and ages for both people
	std::string name1 {person1Name()};
	const int age1 {person1Age()};
	std::string name2 {person2Name()};
	const int age2 {person2Age()};
	print(name1, age1, name2, age2);
	return 0;
}