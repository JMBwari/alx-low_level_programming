#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number.
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	n = _abs(n);

	/** Find last digit of a number */
	int lastDigit = n % 10;

	_putchar('0' + lastDigit);

	return (lastDigit);
}
