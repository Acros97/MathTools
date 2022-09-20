// Math.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <thread>
#include <chrono>
#include "geometry.h"
#include "Calculator.cpp"
using namespace std;
int OPTION_MENU = -1;

void OptionEcuation() {
	Calculator calc;
	double value1, value2, value3, xValue = 0;
	int option = 0;
	cout << "\n";
	cout << "Find 'x' value\n";
	cout << "1.		[num1]x + [num2] = 0" << endl;
	cout << "2.		[num1]x + [num2] = [num3]" << endl;
	cout << "Choose [1 o 2]: " << endl;
	cin >> option;
	switch (option)
	{
	case 1:
		try {
			cout << "Insert 'num1' value: " << endl;
			cin >> value1;
			if (cin.fail())
				throw(xValue);

			cout << "Insert 'num2' value: " << endl;
			cin >> value2;
			if (cin.fail())
				throw(xValue);

			xValue = calc.getOption1XValue(value1, value2);
			cout << value1 << "x" << " + " << value2 << " = 0" << endl;
			cout << "'x' Value result is: " << xValue << endl;
			this_thread::sleep_for(chrono::milliseconds(6000));
			system("cls");
		}
		catch (double valueEx) {
			cout << "Choose a valid number!" << endl;
			std::this_thread::sleep_for(std::chrono::milliseconds(3000));
			system("cls");
			OPTION_MENU = 0;
		}

		break;

	case 2:
		try {
			cout << "Insert 'num1' value: " << endl;
			cin >> value1;
			if (cin.fail())
				throw(xValue);

			cout << "Insert 'num2' value: " << endl;
			cin >> value2;
			if (cin.fail())
				throw(xValue);

			cout << "Insert 'num3' value: " << endl;
			cin >> value3;
			if (cin.fail())
				throw(xValue);

			xValue = calc.getOption2XValue(value1, value2, value3);
			cout << value1 << "x" << " + " << value2 << " = " << value3 << endl;
			cout << "'x' Value result is: " << xValue << endl;
			this_thread::sleep_for(chrono::milliseconds(6000));
			system("cls");
		}
		catch (double valueEx) {
			cout << "Choose a valid number!" << endl;
			std::this_thread::sleep_for(std::chrono::milliseconds(3000));
			system("cls");
			OPTION_MENU = 0;
		}

		break;

	default:
		cout << "Choose a valid option!" << endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(3000));
		system("cls");
		OPTION_MENU = 0;
		break;
	}
}

void Menu() {
	cout << "**************************" << endl;
	cout << "1 - Calculate Triangle Area" << endl;
	cout << "2 - Calculate Rectangle Area" << endl;
	cout << "3 - Multiply with PI Value" << endl;
	cout << "4 - Calculate 1st. Grade Ecuation" << endl;
	cout << "********Calculator*********" << endl;
	std::cout << "6 - Add\n";
	std::cout << "7 - Substract\n";
	std::cout << "8 - Divide\n";
	std::cout << "9 - Multiply\n";
	std::cout << "10 - Get PI value\n";
	cout << "0 - Exit" << endl;
	cout << "**************************" << endl;
	cout << "Choose following options (0-10): ";
}

void CallOption(int option) {
	double result = 0;
	double var1 = 0;
	double var2 = 0;
	double var3 = 0;
	double PI_VALUE = 3.14159;
	// Ecuation
	double value1, value2, value3 = 0;
	//Classes
	geometry g;
	Calculator c;

	switch (option) // OPTION_MENU = 0 --> EXIT PROGRAM
	{
	case 1:
		cout << "Enter base value: " << endl;
		cin >> var1;
		if (var1 != 0) {
			cout << "Enter height value: " << endl;
			cin >> var2;
			g.set_values(var1, var2);
			result = g.CalculateTriangleArea();
			cout << "Triangle area is: " << result << endl;
			this_thread::sleep_for(chrono::milliseconds(3000));
			system("cls");
		}
		else {
			cout << "Choose a valid number!" << endl;
			std::this_thread::sleep_for(std::chrono::milliseconds(3000));
			system("cls");
			OPTION_MENU = 0;
		}

		break;

	case 2:
		cout << "Enter base value: " << endl;
		cin >> var1;
		if (var1 != 0) {
			cout << "Enter height value: " << endl;
			cin >> var2;
			g.set_values(var1, var2);
			result = g.CalculateRectangleArea();
			cout << "Rectangle area is: " << result << endl;
			this_thread::sleep_for(chrono::milliseconds(3000));
			system("cls");
		}
		else {
			cout << "Choose a valid number!" << endl;
			std::this_thread::sleep_for(std::chrono::milliseconds(3000));
			system("cls");
			OPTION_MENU = 0;
		}

		break;

	case 3:

		cout << "Enter a value: " << endl;
		cin >> var1;
		if (var1 != 0) {
			result = var1 * PI_VALUE;
			cout << "Result (" << var1 << " * " << PI_VALUE << ") = " << result << endl;
			this_thread::sleep_for(chrono::milliseconds(5000));
			system("cls");
		}
		else {
			cout << "Choose a valid number!" << endl;
			std::this_thread::sleep_for(std::chrono::milliseconds(3000));
			system("cls");
			OPTION_MENU = 0;
		}

		break;

	case 4: // First grade ecuation
		OptionEcuation();
		break;

	case 6:

		std::cout << "\nPlease enter first number: \n";
		std::cin >> var1;
		if (var1 != 0) {
			std::cout << "Please enter second number: \n";
			std::cin >> var2;
			result = c.addition(var1, var2);
			std::cout << "Result is: " << result;
			std::this_thread::sleep_for(std::chrono::milliseconds(3000));
			system("cls");
		}
		else {
			cout << "Choose a valid number!" << endl;
			std::this_thread::sleep_for(std::chrono::milliseconds(2000));
			system("cls");
			OPTION_MENU = 0;
		}

		break;

	case 7:

		std::cout << "\nPlease enter first number: \n";
		std::cin >> var1;
		if (var1 != 0) {
			std::cout << "Please enter second number: \n";
			std::cin >> var2;
			result = c.subtract(var1, var2);
			std::cout << "Result is: " << result;
			std::this_thread::sleep_for(std::chrono::milliseconds(3000));
			system("cls");
		}
		else {
			cout << "Choose a valid number!" << endl;
			std::this_thread::sleep_for(std::chrono::milliseconds(3000));
			system("cls");
			OPTION_MENU = 0;
		}

		break;

	case 8:
		std::cout << "\nPlease enter first number: \n";
		std::cin >> var1;
		if (var1 != 0) {
			std::cout << "Please enter second number: \n";
			std::cin >> var2;
			result = c.divide(var1, var2);
			std::cout << "Result is: " << result;
			std::this_thread::sleep_for(std::chrono::milliseconds(3000));
			system("cls");
		}
		else {
			cout << "Choose a valid number!" << endl;
			std::this_thread::sleep_for(std::chrono::milliseconds(3000));
			system("cls");
			OPTION_MENU = 0;
		}
		break;

	case 9:
		std::cout << "\nPlease enter first number: \n";
		std::cin >> var1;
		if (var1 != 0) {
			std::cout << "Please enter second number: \n";
			std::cin >> var2;
			result = c.multiply(var1, var2);
			std::cout << "Result is: " << result;
			std::this_thread::sleep_for(std::chrono::milliseconds(3000));
			system("cls");
		}
		else {
			cout << "Choose a valid number!" << endl;
			std::this_thread::sleep_for(std::chrono::milliseconds(3000));
			system("cls");
			OPTION_MENU = 0;
		}
		break;

	case 0:
		cout << "Closing Program...";
		this_thread::sleep_for(std::chrono::milliseconds(2000));
		return;

	default:
		std::cout << "Choose a valid option!";
		std::this_thread::sleep_for(std::chrono::milliseconds(5000));
		system("cls");
		break;
	}
}

int main()
{
	cout << "--- Math Assistant Tool version 1.0 ---" << endl;

	while (OPTION_MENU != 0) {
		Menu();
		cin >> OPTION_MENU;
		CallOption(OPTION_MENU);
	}
}