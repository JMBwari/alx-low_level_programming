#include "main.h"

/**
 * print_line - function that draws a straight line
 * @n: integer for number of lines to be drawn
 * Return: 0
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
