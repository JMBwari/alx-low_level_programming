#include <stdio.h>

int printOutput(int i, int j, int k, int l);

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
					/**
					* declaring variables to store the actual value of the 1st & 2nd digit,
					* and the 3rd and 4th digit respectively
					*/
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

					/** if the combination is 0001, then don't precede with a comma & space */
					if (!((i == 48) && (j == 48) && (k == 48) && (l == 49)))
					{
						putchar(',');
						putchar(' ');
					}

					/** print the first two digits, a space, then the second two digits */
					printOutput(i, j, k, l);
				}
			}
		}
	}

	putchar('\n');

	return (0);
}

/**
 * printOutput - prints output.
 * @i: first digit
 * @j: second digit
 * @k: third digit
 * @l: fourth digit
 * Description: print the 1st two digits, a space, then the 2nd two digits.
 * Return: 0 if successful.
 */
int printOutput(int i, int j, int k, int l)
{
	/** print the first two digits, a space, then the second two digits */
	putchar(i);
	putchar(j);
	putchar(' ');
	putchar(k);
	putchar(l);

	return (0);
}
