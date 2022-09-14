#include <stdio.h>

/**
 * main - entry point
 * Return: 0 if succesful
 */

int main(void)
{
	int i;
	long first, second, next, sum;

	first = 1;
	second = 2;
	next = first + second;
	sum = 2;

	for (i = 3; i < 34; i++)
	{
		first = second;
		second = next;
		next = first + second;

		if ((next % 2) == 0)
		{
			sum += next;
		}
	}

	printf("%li", sum);
	printf("\n");

	return (0);
}
