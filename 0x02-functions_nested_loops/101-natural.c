#include <stdio.h>
#include "main.h"

/**
* main - entry point
* Return: 0 if succesful
*/
int main(void)
{
	int i;
	int sum;

	sum = 0;

	for (i = 0; i < 1024; i++)
	{
		/** check if i is a multiple of 3 or 5 */
		if (((i % 3) == 0) || ((i % 5) == 0))
		{
			sum += i;
		}
	}

	printf(sum);

	return (0);
}
