#include <iostream>
#include <string>

std::string nameInput()
{
std::cout << "Enter your name: ";
std::string name;
std::getline(std::cin >> std::ws, name);
return name;
}

int ageInput()
{
	std::cout << "Enter your age: ";
	int age;
	std::cin >> age;
	return age;
}

int main() 
{
std::string name {nameInput()};
int age {ageInput()};
int agePlusNameLength{ age + static_cast<int>(name.length())};
std::cout << "The sum of your age and name length is: " << agePlusNameLength << '\n';
return 0;
}