#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 if successful
*/
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			putchar(i);
			putchar(j);
			putchar(',');
			putchar(' ');  
		}
	}
}
