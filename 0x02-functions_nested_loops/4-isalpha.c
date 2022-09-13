#include "main.h"

/**
 * _isalpha - checks if a character isan alphabet in lower or upper case
 * @c - the character whose case we're checking for
 * Return: 1 if lowercase or uppercase, 0 if otherwise
 */
int _isalpha(int c)
{
	/**
	 * checks if c falls in the range of 97 to 122
	 * or if falls in the range of 65 to 90
	 */
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
