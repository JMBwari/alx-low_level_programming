#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 if successful
*/
int main(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			if (i == j)
			{
				continue;
			}

			if (i > j)
			{
				continue;
			}

			if ((i == 0) && (j == 1))
			{
				putchar(i);
				putchar(j);
			}
			else
			{
				putchar(', ');
				putchar(i);
				putchar(j);
			}
		}

	}

	return (0);
}
