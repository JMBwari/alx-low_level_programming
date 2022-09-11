#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 if successful
 */
int main(void)
{
	int i, j, k, l;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (k = 48; k < 58; k++)
			{
				for (l = 48; l < 58; l++)
				{
					if ((i == j) || (i == k) || (i == l) || (j == k) || (j == l))
					{
						continue;
					}

					if ((i > j) || (j > k) || (k > l))
					{
						continue;
					}

					if (!((i == 48) && (j == 49) && (k == 50) && (l == 51)))
					{
						putchar(',');
						putchar(' ');
					}

					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
