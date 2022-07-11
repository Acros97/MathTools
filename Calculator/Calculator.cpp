// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <chrono>
#include <thread>
using std::string;

#pragma region Operation
double addition(double number1, double number2) {
	return number1 + number2;
}

double subtract(double number1, double number2) {
	return number1 - number2;
}

double divide(double number1, double number2) {
	return number1 / number2;
}

double multiply(double number1, double number2) {
	return number1 * number2;
}

void Menu() {
	std::cout << "**************************\n";
	std::cout << "1 - Add\n";
	std::cout << "2 - Substract\n";
	std::cout << "3 - Divide\n";
	std::cout << "4 - Multiply\n";
	std::cout << "5 - Exit\n";
	std::cout << "**************************\n";
	std::cout << "Choose following options (1-4): ";
}

void CallFunction(int option) {
	double result = 0;
	double number1 = 0;
	double number2 = 0;

	switch (option)
	{
	case 1:
		std::cout << "\nPlease enter first number: \n";
		std::cin >> number1;
		std::cout << "Please enter second number: \n";
		std::cin >> number2;
		result = addition(number1, number2);
		std::cout << "Result is: " << result;
		std::this_thread::sleep_for(std::chrono::milliseconds(3000));
		system("cls");
		break;

	case 2:
		std::cout << "\nPlease enter first number: \n";
		std::cin >> number1;
		std::cout << "Please enter second number: \n";
		std::cin >> number2;
		result = subtract(number1, number2);
		std::cout << "Result is: " << result;
		std::this_thread::sleep_for(std::chrono::milliseconds(3000));
		system("cls");
		break;

	case 3:
		std::cout << "\nPlease enter first number: \n";
		std::cin >> number1;
		std::cout << "Please enter second number: \n";
		std::cin >> number2;
		result = divide(number1, number2);
		std::cout << "Result is: " << result;
		std::this_thread::sleep_for(std::chrono::milliseconds(3000));
		system("cls");
		break;

	case 4:
		std::cout << "\nPlease enter first number: \n";
		std::cin >> number1;
		std::cout << "Please enter second number: \n";
		std::cin >> number2;
		result = multiply(number1, number2);
		std::cout << "Result is: " << result;
		std::this_thread::sleep_for(std::chrono::milliseconds(3000));
		system("cls");
		break;

	case 5:
		std::cout << "Bye bye!";
		std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		return;

	default:
		std::cout << "Choose a valid option!";
		std::this_thread::sleep_for(std::chrono::milliseconds(2000));
		system("cls");
		break;
	}
}

#pragma endregion

int main()
{
	std::cout << " --- Math Operations Tool verion 1.0 ---\n";
	int option = 0;

	while (option != 5)
	{
		Menu();
		std::cin >> option;
		CallFunction(option);
	}
}