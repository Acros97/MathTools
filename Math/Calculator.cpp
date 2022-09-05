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
};