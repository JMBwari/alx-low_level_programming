#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a given string
 *
 * @*str: variable string
 *
 * Return: void
 *
 */
void puts2(char *str)
{
	int i = 0; /* the loop variable */
	bool skip = 0; /* skip start as False so that we don't skip the first character. */

	for (i = 0; i < strlen(str); i++)
	{
		if (!skip)
		{
			_putchar(str[i]);
		}

		skip = !skip; /* change skip from false to true, or true to false */
	}

	_putchar("\n");
}
