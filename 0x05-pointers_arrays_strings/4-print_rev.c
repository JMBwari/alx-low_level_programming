#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @s: variable string
 * Return: void
 */
void print_rev(char *s)
{
	size_t i; /* loop variable*/

	for (i = strlen(s); i > 0; i--)
	{
		_putchar(s[i - 1]);
	}

	_putchar(10);
}
