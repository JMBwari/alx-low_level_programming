#include "main.h"
#include <string.h>

/**
 * _puts - prints a string
 * @str: variable string
 * Return: void
 */
void _puts(char *str)
{
	int i; /* the loop variable */

	for (i = 0; i < strlen(str); i++)
	{
		_putchar(str[i]);
	}

	_putchar("\n");
}
