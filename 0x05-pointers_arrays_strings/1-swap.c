#include "main.h"

/**
 * swap_int - swaps value of two intergers
 * @a: variable 1
 * @b: variable 2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
