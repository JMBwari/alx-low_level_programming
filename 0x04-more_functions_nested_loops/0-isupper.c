#include "main.h"
#include <stdio.h>

/** int _isupper - funcation that checks for uppercase character
 * @c: character
 * Return: 1 if c is uppercase, 0 if otherwise
 */
int _isupper(int c)
{
	int up;

	if (c >= 65 && c <= 90)
	{
		up = 1;
	}
	else
	{
		up =0;
	}
	return (up);
}

