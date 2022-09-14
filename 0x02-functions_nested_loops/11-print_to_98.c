#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98.
 * @n: starting integer
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i < 99; i++)
	{
		printf("%d", i);
	}

	printf("\n");
}
