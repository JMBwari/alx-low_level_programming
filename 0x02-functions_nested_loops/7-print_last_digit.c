#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number.
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int lastDigit;

	/** Find last digit of a number */
	lastDigit = n % 10;

	if (lastDigit < 0)
	{
		lastDigit = lastDigit * -1;
	}

	_putchar('0' + lastDigit);

	return (lastDigit);
}
