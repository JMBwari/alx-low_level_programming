#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 if successful
 */
int main(void)
{
	/** declaring the loop variables */
	int i, j, k, l;

	/** loop for first digit */
	for (i = 48; i < 58; i++)
	{
		/** loop for second digit */
		for (j = 48; j < 58; j++)
		{
			/** loop for third digit */
			for (k = 48; k < 58; k++)
			{
				/** loop for fourth digit */
				for (l = 48; l < 58; l++)
				{
					/** declaring variables to store the actual value of the first and second digit, and the third and fourth digit respectively */
					int value_of_first_two_digits, value_of_second_two_digits;

					/** i is the tens value, j is the ones value; hence, i times 10 plus j */
					value_of_first_two_digits = (i * 10) + j;
					/** k is the tens value, l is the ones value; hence, k times 10 plus l */
					value_of_second_two_digits = (k * 10) + l;

					/** if first value == second value, ignore the combination */
					if (value_of_first_two_digits == value_of_second_two_digits)
					{
						continue;
					}

					/** if first value > second value, ignore the combination */
					if (value_of_first_two_digits > value_of_second_two_digits)
					{
						continue;
					}

					/** if the combination is 0001, then don't precede with a comma and space */
					if (!((i == 48) && (j == 48) && (k == 48) && (l == 49)))
					{
						putchar(',');
						putchar(' ');
					}

					/** print the first two digits, then a space, then the second two digits */
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
