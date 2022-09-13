#include "main.h"

/**
 * print_sign - sign of a number
 * @n: the number whose sign we're checking
 * Return: 1 if positive and > 0, 0 if zero, -1 if less than zero.  2 if none of the conditions are met.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);		
	}

	if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	return (2);
}
