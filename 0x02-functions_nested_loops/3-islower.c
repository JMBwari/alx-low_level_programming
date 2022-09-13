#include "main.h"

/**
 * _islower - checks if a character is lowercase or not
 * @c: the character whose case we're checking
 * Return: 1 if lowercase, 0 if otherwise
 */
int _islower(int c)
{
	/** checks if c falls within the range 97 - 122 */
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
