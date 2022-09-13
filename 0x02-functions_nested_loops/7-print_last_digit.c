#include "main.h"

unsigned int absu(int value);

/**
 * print_last_digit - a function that prints the last digit of a number.
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int lastDigit;

	N = absu(n);

	/** Find last digit of a number */
	lastDigit = n % 10;

	_putchar('0' + lastDigit);

	return (lastDigit);
}

unsigned int absu(int value)
{
	return (value < 0) ? -((unsigned int)value) : (unsigned int)value;
}
