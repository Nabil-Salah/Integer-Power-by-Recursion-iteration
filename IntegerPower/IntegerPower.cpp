#include <iostream>
#include <iomanip>

using namespace std;
//Calculating first int(Base Number) power second int(Second Number) Using Iteration
//Caution The exponentOfPower Must Be >= 0
int integerPowerit(int baseNum, int exponentOfPower) {
	if (exponentOfPower == 0)
		return 0;
	int result{ baseNum };
	for (int i = 1; i < exponentOfPower; i++)
	{
		result *= baseNum;
	}
	return result;
}
//Calculating first int(Base Number) power second int(Second Number) Using Recursion
//Caution The exponentOfPower Must Be >= 0
int integerPowerre(int baseNum, int exponentOfPower) {
	if (exponentOfPower == 0)
		return 0;
	if (exponentOfPower == 1)
	{
		return baseNum;
	}
	else {
		return baseNum * integerPowerre(baseNum, exponentOfPower - 1);
	}
}
double integerPowerItCheck(int baseNum, int exponentOfPower) {
	if (exponentOfPower < 0)
		return 1.00 / integerPowerit(baseNum, exponentOfPower * -1);
	else
		return integerPowerit(baseNum, exponentOfPower);
}
double integerPowerreCheck(int baseNum, int exponentOfPower) {
	if (exponentOfPower < 0)
		return 1.00 / integerPowerre(baseNum, exponentOfPower * -1);
	else
		return integerPowerit(baseNum, exponentOfPower);
}
int main() {
	cout << "Enter Two Numbers: ";
	int baseNum{}, exponentOfPower{};
	cin >> baseNum >> exponentOfPower;
	cout << "By Iteration: " << setprecision(10) << integerPowerItCheck(baseNum, exponentOfPower) << "\n";
	cout << "By Recursion: " << integerPowerreCheck(baseNum, exponentOfPower);
}