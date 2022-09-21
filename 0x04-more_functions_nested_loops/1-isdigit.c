#include "main.h"

/**
 * int _isdigit - function that checks for a digit.
 * @c: character representing the digit being checked
 * Return: 1 if c is digit, o if otherwise
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	return (0);
}
