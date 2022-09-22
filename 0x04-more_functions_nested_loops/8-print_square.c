#include "main.h"

/**
 * print_square - function that prints a square.
 * @size: integer for the size of the square
 * Return: 0 if successful
 */
void print_square(int size)
{
	int i, j;
	
	if (size >= 0)
	{
		for (i = 0; i <= size; i++)
		{
			for (j = 0; j <= size; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
