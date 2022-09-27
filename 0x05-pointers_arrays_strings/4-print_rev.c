#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @str: variable string
 * Return: void
 */
void print_rev(char *s)
{
	size_t i; /* loop variable*/

	for (i = strlen(str) -1; i >= 0; i--)
	{
		_putchar(str[i]);
	}

	_putchar(10);
}
