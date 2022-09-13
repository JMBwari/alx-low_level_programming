#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @j: the number whose absolute value we're computing
 * Return: absolute value of input parameter
 */
int _abs(int j)
{
	if (j > 0)
	{
		return (j);
	}

	if (j < 0)
	{
		return (j * -1);
	}

	return (0);
}
