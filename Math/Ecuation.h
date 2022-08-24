#pragma once
#include <math.h>

class Ecuation
{
	double value1, value2, value3;

public:void set_values(double pValue1, double pValue2, double pValue3) {
	value1 = pValue1;
	value2 = pValue2;
	value3 = pValue3;
}
public:double FirstGradeEcuation(double value1, double value2) {
	double xValue = 0;
	value2 = -value2;
	xValue = value2 / value1;
	return xValue;
}

public:double SecondGradeEcuationFirstRoute(double aValue, double bValue, double cValue) {
	double under_squareRoot = pow(bValue, 2) - ((4 * aValue)* cValue);
	double squareRoot = sqrt(under_squareRoot);
	double xValueStepAditionOption = (-bValue + squareRoot) / (2 * aValue);
	return xValueStepAditionOption;
}
public:double SecondGradeEcuationSecondRoute(double aValue, double bValue, double cValue) {
	double under_squareRoot = pow(bValue, 2) - ((4 * aValue)* cValue);
	double squareRoot = sqrt(under_squareRoot);
	double xValueStepSubstractionOption = (-bValue - squareRoot) / (2 * aValue);
	return xValueStepSubstractionOption;
}
};
