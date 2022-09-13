#include "main.h"

/**
 * print_alphabet_x10 - print alphabet in lower case X 10
 */
void print_alphabet_x10(void)
{
	int h;
	int i;

	for (h = 1; h < 11; h++)
	{
		for (i = 97; i < 123; i++)
		{
			_putchar(i);
		}

		_putchar('\n');
	}
}
