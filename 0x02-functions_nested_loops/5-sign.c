#include "main.h"

/**
 * print_sign - sign of a number
 * @n: character whose case we're checking for
 * Return: 1 if positive and > 0, 0 if zero, -1 if less than zero
 */
int print_sign(int n)
{
	int n;

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
}
