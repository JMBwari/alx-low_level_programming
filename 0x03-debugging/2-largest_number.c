#include "main.h"

/**
 * largest_number - rerurns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (b >= a && b >= c)
	{
		largest = b;
	}
	else if (a >= b && a >= c)
	{
		largest = a;
	}
	else
	{
		largest = c;
	}

	return (largest);
}

