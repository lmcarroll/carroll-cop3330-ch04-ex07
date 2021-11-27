/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Liam Carroll
 */

#include "std_lib_facilities.h";

int parseInput(string input)
{
	string arr1[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	string arr2[] = { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9" };
	int i;

	for (i = 0; i < 10; i++)
	{
		if (arr1[i] == input || arr2[i] == input)
		{
			break;
		}

		else if (i == 9)
		{
			return 10;
		}
	}

	return i;
}

int main()
{
	string operStr1;
	string operStr2;
	char operation;

	cout << "Enter an integer value, an operation symbol, and another integer value all separated by spaces. They can be in either\ndecimal or word form (e.g. '7 + four'): ";
	cin >> operStr1 >> operation >> operStr2;

	double operInt1 = parseInput(operStr1);
	double operInt2 = parseInput(operStr2);

	if (operInt1 == 10 || operInt2 == 10)
	{
		cout << "ERROR: an operand was not a whole number";

		return 0;
	}

	double result;

	switch (operation)
	{
	case '+':
		result = operInt1 + operInt2;

		cout << "The sum of " << operInt1 << " and " << operInt2 << " is " << result << ".";
		break;

	case '-':
		result = operInt1 - operInt2;

		cout << "The difference between " << operInt1 << " and " << operInt2 << " is " << result << ".";
		break;

	case '*':
		result = operInt1 * operInt2;

		cout << "The product of " << operInt1 << " and " << operInt2 << " is " << result << ".";
		break;

	case '/':
		result = operInt1 / operInt2;

		cout << "The quotient of " << operInt1 << " and " << operInt2 << " is " << result << ".";
		break;

	default:
		cout << "ERROR: operation symbol was not recognized";
	}

	return 0;
}