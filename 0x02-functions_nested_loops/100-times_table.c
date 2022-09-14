#include "main.h"

/**
 * print_times_table - prints  the n times table starting with 0
 * @n: the n times table to print
 * Return: void
*/
void print_times_table(int n)
{
	if ((n > 15) || (n < 0))
	{
		/** do nothing */
	}
	else
	{
		int i, j;

		for (i = 0; i < n + 1; i++)
		{
			for (j = 0; j < n + 1; j++)
			{
				if (i * j < 10)
				{
					_putchar((i * j) + '0');
				}
				else if (i * j < 100)
				{
					_putchar(((i * j) / 10) + '0');
					_putchar(((i * j) % 10) + '0');
				}
				else
				{
					_putchar(((i * j) / 100) + '0');
					_putchar((((i * j) - 100) / 10) + '0');
					_putchar(((i * j) % 100) + '0');
				}
				/** not at last column, comma and space(s) */
				if (j != n)
				{
					_putchar(',');
					if (i * (j + 1) < 100)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					else if (i * (j + 1) < 10)
					{
						_putchar(' ');
						_putchar(' ');
					}
					else
					{
						_putchar(' ');
					}
				}
				else
				/** new line after last column */
				{
					_putchar('\n');
				}
			}
		}
	}
}
