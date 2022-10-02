#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* print_array - prints the elements of the array a
* @a: array variable
* @n: length of the array
* Return: void
*/
void print_array(int *a, int n)
{
	int i = 0; /* loop variable */

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}

	if (n > 0)
	{
		printf("%d", a[n - 1]);
	}

	printf("\n");
}
