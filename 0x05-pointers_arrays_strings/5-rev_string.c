#include "main.h"
#include <string.h>

/**
 * rev_string - prints a string in reverse
 * @s: variable string
 * Return: void
 */
void rev_string(char *s)
{
	size_t i; /*the loop variable*/

	for (i < strlen(s); i--)
	{
		_putchar(s[i -1]);
	}
}
