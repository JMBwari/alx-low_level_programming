#include "main.h"

/** int _isupper - funcation that checks for uppercase character
 * @c: character
 * Return: 1 if c is uppercase, 0 if otherwise
 */
int _isupper(int c)
{
	int c;

	if ((c >= 65) && (c <= 90))
	{
		c = 1;
	}
	else
	{
		c =0;
	}
	return (c);
}

