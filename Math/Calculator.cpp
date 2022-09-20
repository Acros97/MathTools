#include <iostream>

class Calculator {
public:double addition(double number1, double number2) {
	return number1 + number2;
}

public:double subtract(double number1, double number2) {
	return number1 - number2;
}

public:double divide(double number1, double number2) {
	return number1 / number2;
}

public:double multiply(double number1, double number2) {
	return number1 * number2;
}

public:double getPI() {
	double pi = 2 * acos(0.0);
	return pi;
}

public:double getOption1XValue(double value1, double value2) {
	value2 = -value2;
	return value2 / value1;
}

public:double getOption2XValue(double value1, double value2, double value3) {
	// [num1]x + [num2] = [num3]
	value3 = value3 - value2;
	return value3 / value1;
}
};