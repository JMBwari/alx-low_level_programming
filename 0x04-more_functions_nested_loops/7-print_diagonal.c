#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line.
 * @n: the integer in the function to print the line
 * Return: 0
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i = 0; i < n; i++)
		{
			while (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
