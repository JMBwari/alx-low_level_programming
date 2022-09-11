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
					int value_of_first_two_digits, value_of_second_two_digits;

					value_of_first_two_digits = (i * 10) + j;
					value_of_second_two_digits = (k * 10) + l;
					
					if (value_of_first_two_digits == value_of_second_two_digits)
					{
						continue;
					}

					if (value_of_first_two_digits > value_of_second_two_digits)
					{
						continue;
					}

					if (!((i == 48) && (j == 48) && (k == 48) && (l == 49)))
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
