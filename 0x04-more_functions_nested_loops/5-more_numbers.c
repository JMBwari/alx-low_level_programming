#include "main.h"

/**
 * more_numbers - prints 0 to 14 ten times
 * Return: 0 to 14 ten times
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 11; i++)
	{
		for j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar('0' + (j / 10));
			}

			_putchar('0' + (j % 10));
		}
	}
}
