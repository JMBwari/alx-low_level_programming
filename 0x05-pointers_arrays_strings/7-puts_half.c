#include "main.h"
#include <string.h>

/**
 *
 * puts_half- prints the second half of a given string
 *
 * @str: variable string
 *
 * Return: void
 *
 */
void puts_half(char *str)
{
	size_t i = 0;
	size_t size_of_string = strlen(str);
	size_t starting_point;

	if ((size_of_string % 2) == 0) /* even */
	{
		starting_point = size_of_string / 2;
	}
	else /* odd */
	{
		starting_point = ((size_of_string - 1) / 2);
	}

	for (i = starting_point; i < size_of_string; i++)
	{
		_putchar(str[i]);
	}

	_putchar(10);
}
