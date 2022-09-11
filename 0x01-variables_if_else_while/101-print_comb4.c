#include <stdio.h>

/**
 *main - entry point
*
* Return: 0 if successful
*/
int main(void)
{
	int i, j, k;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (k = 48; k < 58; k++)
			{
				if ((i == j) || (i == k) || (j == k))
				{
					continue;
				}

				if ((i > j) || (j > k))
				{
					continue;
				}

				if (!((i == 48) && (j == 49) && (k == 50)))
				{
					putchar(',');
					putchar(' ');
				}

				putchar(i);
				putchar(j);
				putchar(k);
			}
		}
	}

	putchar('\n');

	return (0);
}
